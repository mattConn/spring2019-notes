CC = clang++ 
FLAGS = -std=c++11
COMPILE = $(CC) $(FLAGS) $^ -o bin/$@

fcfs: fcfs.cpp
	$(COMPILE)

sjn: sjn.cpp
	$(COMPILE)

priority: priority.cpp
	$(COMPILE)

all: fcfs sjn priority

clean:
	rm bin/*
