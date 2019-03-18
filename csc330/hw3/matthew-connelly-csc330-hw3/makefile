CC = clang++
FLAGS = -std=c++11
BIN = HW3

$(BIN): main.cpp
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm $(BIN)

check:
	./$(BIN) input.txt input2.txt input3.txt
