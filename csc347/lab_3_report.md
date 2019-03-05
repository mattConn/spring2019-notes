# CSC 347
# Lab 3 - 1-Bit Adder, Subtractor
# Matthew Connelly
# March 5, 2019

\newpage

# Goals 
The goal of lab 3 was to build a 1-Bit Adder and Subtractor using AND,OR and XOR gates.

# Design Procedure / Theory of Operations  
The first step was to derive a truth table for the 1-bit Adder, where S represents the sum of the addition of the three inputs x, y and z, and C represents the carry bit of the addition:

```
F = x + y + z

xyz	C S
000 0 0
001 0 0
010 0 0
011 1 0
100 0 1
101 1 0
110 1 0
111 1 1
```
Given a diagram of the adder, the boolean equations for for C and S were as follows:
$$
C = xy + (x \oplus y)z
$$
$$
S = (x \oplus y)\oplus z
$$

We then had to construct a 1-bit Subtractor


# Conclusion
