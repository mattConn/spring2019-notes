BIN = complex 

$(BIN) : main.cpp complex.cpp
	clang++ -std=c++11 $^ -o $@ 

check:
	./$(BIN)
	
clean:
	rm $(BIN)
