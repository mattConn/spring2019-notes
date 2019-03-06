CC = gcc
FLAGS = -D NOINTERACT

# algorithm binaries
BIN = mem-mgmt-algorithms

$(BIN): main.c
	$(CC) $(FLAGS) $^ -o $@

check:
	./$(BIN)

clean:
	rm $(BIN)
