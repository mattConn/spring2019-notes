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

Given another diagram, we then had to construct a 1-bit Subtractor and again derive a truth table:

```
B = bin, D = diff

abB DBout
000 00
001 11
010 11
011 01
100 10
101 00
110 00
111 11
```
The boolean equations for Diff and Bout were:
$$
\text{Diff} = B_{in} \oplus (A \oplus B)
$$
$$
\text{B$_{out}$} = A'B + B_{in}(A \oplus B)'
$$
