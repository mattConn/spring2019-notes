#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h> 
#define MAX_LEN 100

int main()
{
    // pipe ends: 0 read, 1 write
    int fdp[2]; // parent's pipe
    int fdc[2]; // child's pipe

    pipe(fdp);
    pipe(fdc);

    char *msgp = "Message from Parent"; // parent's message
    char *msgc = "Message from Child"; // child's message

    // child proc
    if(!fork()) // successful fork, falsy
    {
        char inbox[MAX_LEN]; // storage of message

        // read from parent's pipe
        read(fdp[0], inbox, MAX_LEN);
        close(fdp[0]); // close read

        // print received msg
        printf("Child received: %s\n", inbox);

        // write to child's pipe
        write(fdc[1], msgc, strlen(msgp)+1);
        close(fdc[1]); // close write end
    }
    else
    {
    // parent proc
        char inbox[MAX_LEN]; // storage of message

        // write message to parent's pipe 
        write(fdp[1], msgp, strlen(msgp)+1);
        close(fdp[1]); // close write end

        // wait for child's message
        wait(NULL);

        // read from child's pipe
        read(fdc[0], inbox, MAX_LEN);
        close(fdc[0]); // close read

        // print received msg
        printf("Parent received: %s\n", inbox);

        return 0 ;
    }

    return 0;
}