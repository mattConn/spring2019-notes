CC = clang++ 
FLAGS = -std=c++11

# algorithm binaries
BIN = proc-scheduling

$(BIN): main.cpp
	$(CC) $(FLAGS) $^ -o $@

check:
	./$(BIN)

clean:
	rm $(BIN)
