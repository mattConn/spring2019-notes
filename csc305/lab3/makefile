CC = clang++ 
FLAGS = -std=c++11
COMPILE = $(CC) $(FLAGS) $^ -o bin/$@

# fcfs: fcfs.cpp
# 	$(CC) $(FLAGS) $^ -o bin/$@

# sjn: sjn.cpp
# 	$(CC) $(FLAGS) $^ -o bin/$@
fcfs: fcfs.cpp
	$(COMPILE)

sjn: sjn.cpp
	$(COMPILE)

all: fcfs sjn

clean:
	rm bin/*