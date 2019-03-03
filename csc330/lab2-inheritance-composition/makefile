CC = clang++
FLAGS = -std=c++11
BIN = lab2

$(BIN) : main.cpp
	$(CC) $(FLAGS) $^ -o $@

check:
	./$(BIN)

clean:
	rm $(BIN)
