CC = clang++
FLAGS = -std=c++11
BIN = inheritance-tester

inheritance-tester : main.cpp point2d.cpp circle.cpp cylinder.cpp
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm $(BIN)
