#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define MAX_LEN 100

int main()
{
    int fd[2]; // pipe ends: 0 read, 1 write
    pipe(fd);

    char *msg = "Important message"; // message to send

    // child proc: read from pipe
    if(!fork()) // successful fork, falsy
    {
        printf("Child proc.\n");

        char inbox[MAX_LEN]; // storage of message

        close(fd[1]);
        read(fd[0], inbox, MAX_LEN);
        close(fd[0]);

        printf("\t%s\n", inbox);
    }
    else
    {
    // parent proc: write to pipe
        printf("Parent proc.\n");
        close(fd[0]); // close read end
        write(fd[1], msg, strlen(msg)+1);
        printf("%d\n",fd[1]);
        close(fd[1]); // close write end
    }

    return 0;
}