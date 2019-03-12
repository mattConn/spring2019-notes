CC = clang++
FLAGS = -std=c++11
BIN = HW2

$(BIN): main.cpp Circle.cpp RightTriangle.cpp Rectangle.cpp Shape.cpp Square.cpp
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm $(BIN)

check:
	./$(BIN)
