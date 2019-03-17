CC = clang++
FLAGS = -std=c++11
BIN = HW3

$(BIN): main.cpp
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm $(BIN)

check:
	./$(BIN)
