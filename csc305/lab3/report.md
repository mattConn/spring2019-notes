# CSC 305 Lab 3
## Process Scheduling
Matthew Connelly

## Algorithm Results

Below are tables detailing the results for three scheduling algorithms: First Come First Serve, Priority and Shortest Job Next.

The best algorithm for the given inputs is the Shortest Job Next algorithm, given that it sorts the processes by shortest execution time.

### First come, first serve results

| Proc | Arrival Time | Exec. Time | Turnaround Time |
| - | - | - | - |
p0 | 0 |  8 |  0
p1 | 0 |  6 |  8
p2 | 0 |  3 |  14
p3 | 0 |  5 |  17
Avg. turnaround time: 9.75

### Priority results

| Proc |  Priority |  Arrival Time |  Exec. Time |  Turnaround Time |
| - | - | - | - | - |
p0 | 3 |  0 |  3 |  0
p1 | 3 |  0 |  8 |  3
p2 | 2 |  0 |  5 |  11
p3 | 1 |  0 |  6 |  16
Avg. turnaround time: 7.5

\newpage

### Shortest job next results

| Proc |  Arrival Time |  Exec. Time |  Turnaround Time |
| - | - | - | - |
p0 | 0 |  3 |  0 |
p1 | 0 |  5 |  3 |
p2 | 0 |  6 |  8 |
p3 | 0 |  8 |  14 |
Avg. turnaround time: 6.25
