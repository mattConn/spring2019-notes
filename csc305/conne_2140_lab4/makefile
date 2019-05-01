CC = gcc 
FLAGS = -std=c11
BIN = pipefork

$(BIN) : $(BIN).c
	$(CC) $(FLAGS) $^ -o $@

check:
	./$(BIN)

clean:
	rm $(BIN)