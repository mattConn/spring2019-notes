CC = x86_64-w64-mingw32-g++
FLAGS = -std=c++11
BIN = inheritance-tester

inheritance-tester : main.cpp point2d.cpp circle.cpp cylinder.cpp
	$(CC) $^ -o $@

clean:
	rm $(BIN)

check:
	./$(BIN)
