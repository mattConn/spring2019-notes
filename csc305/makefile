CC = clang++
FLAGS = -std=c++11 -g

# algorithm binaries
FF_BIN = first-fit

$(FF_BIN): global.cpp first-fit.cpp
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm $(FF_BIN)
