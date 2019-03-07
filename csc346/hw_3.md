# CSC 346
## Homework 3
### Matthew Connelly
### 3/5/19

1. Simplify the following boolean functions using 3-variable maps.

a)
$$
F(x,y,z) = \sum(0,1,6,7)
$$

| x\\yz | 00 | 01 | 11 | 10 |
| :---- | -- | -- | -- | -- |
|   0   | 1  | 1  | 0  | 0  |
|   1   | 0  | 0  | 1  | 1  |

$$
\Rightarrow x'y' + xy
$$

b.)
$$
F(x,y,z) = \sum(1,4,5,6,7)
$$

| x\\yz | 00 | 01 | 11 | 10 |
| :---- | -- | -- | -- | -- |
|   0   | 0  | 1  | 0  | 0  |
|   1   | 1  | 1  | 1  | 1  |

$$
\Rightarrow x + y'z
$$

c.)
$$
F(x,y,z) = xyz + x'y'z + xy'z' + xyz'
$$

| x\\yz | 00 | 01 | 11 | 10 |
| :---- | -- | -- | -- | -- |
|   0   | 0  | 1  | 0  | 0  |
|   1   | 1  | 1  | 1  | 1  |

$$
\Rightarrow x + y'z
$$
