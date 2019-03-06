# CSC 305
# Lab 2 - Memory Management
# Matthew Connelly
# March 6th, 2019

\newpage

### Memory Size: 800
### Number of Partitions: 4
### Partition Sizes:
```
P1=200	P2=100	P3=100	P4=400
```
### Job Sizes:
```
j1=50	j2=200	j3=200	j4=300	
```

| Partition/Algorithm | FF | BF | NF | WF |
| - | - | - | - | - |
| P1 | j1/150 | j2/0  | j1/150 | j2/0 |
| P2 | -/100 | j1/50  | -/100 | -/100 |
| P3 | -/100 | -/100  | -/100 | -/100  |
| P4 | j2/200 | j3/200 | j2/200 | j1/350 |
| Mem. Waste | 550 | 350 | 550 | 550 |
| Waiting Jobs | 2 | 1 | 2 | 2 |


The best algorithm for the given data is best-fit because it looks to minimize the amount of memory wasted, and in this example, dynamic memory is not considered, nor is any interation beyond the first, so future external fragmentation cannot be considered.

For the initial memory allocation, best-fit will have the least waiting jobs and least memory wasted.
