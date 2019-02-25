CC = clang++
FLAGS = std=c++11
BIN = lab2

$(BIN) : main.cpp Shape.cpp
	$(CC) $^ -o $@

check:
	./$(BIN)

clean:
	rm $(BIN)
