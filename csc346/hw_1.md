# CSC 346
## Homework 1
### Matthew Connelly
### 2/7/19

1. What are the largest and smallest unsigned numbers that can be expressed with 10 bits? What are the largest and smallest signed numbers that can be expressed with 10 bits?

	- Largest and smallest unsigned: $2^{10}-1 = 1023$, and $0$.
	- Largest and smallest signed: $2^9-1 = 511$ and $-2^9 = -512$ (or 10 0000 0000$_2$).

2. Convert the hexadecimal number F9A5 to binary and then from binary convert it to octal.
	- F9A5 = 1111 1001 1010 0101$_2$
	- 1 111 100 110 100 101$_2$ = 174645$_8$

3. Convert decimal 39.375 to binary and hexadecimal.
	- binary: 100111.011
	- hexadecimal: 27.6

4. Express the following numbers in decimal: (11010.1001)$_2$, (18.5)$_{16}$, and (37.24)$_8$.
	- (11010.1001)$_2$ = 26.5625$_{10}$
	- (18.5)$_{16}$ = 24.3125$_{10}$
	- (37.24)$_8$ = 31.3125$_{10}$

5. Add and multiply the following numbers without converting them to decimal: 1101$_2$ and 111$_2$.
	- Sum: 10100
	- Product: 1011011

6. Obtain 1's and 2's complement of the following binary numbers:
a. 10101011
	- 1's complement: 01010100
	- 2's complement: 01010101
b. 01001110
	- 1's complement: 10110001
	- 2's complement: 10110010
c. 00000000
	- 1's complement: 11111111
	- 2's complement: 100000000

7. Convert decimal +54, -54, -25 and +25 to binary using enough digits to accomodate the numbers. Then perform the binary equivalent of (+54) + (+25), (+54)+(-25), (-54)+(+25), (-54)+(-25). Convert the answers back to decimal and verify that they are correct.
	- (Sign bits omitted)
	- +54 = 110110
	- -54 = 1010
	- +25 = 11001
	- -25 = 111
	- (+54) + (+25)
		- = 1001111 = 79$_{10}$
	- (+54)+(-25)
		- = 11101 = 29$_{10}$
	- (-54)+(+25)
		- = 1100011 = -29$_{10}$
	- (-54)+(-25) = 10110001

8. Convert decimal 256 and 325 to BCD codes, and perform their addition using BCD codes.
	- 256 = 0010 0101 0110
	- 325 = 0011 0010 0101
	- sum = 0101 1000 0001

9. Convert the characters "8Ce3" to ASCII codes. Append an odd parity bit to *each letter* at the left.
	- 8 C e 3 = 1000011, 0011100, 0101110, 0011011
	- after odd parity bit = 0 1000011, 0 0011100, 1 0101110, 1 0011011

10. The following is a string of ASCII characters whose bit patterns have been converted into hexadecimal for compactness: 4A EF 68 6E 20 C4 EF E5. Of the 8 bits in each pair of digits, the leftmost is a parity bit. The remaining bits are the ASCII code.
	a. Convert to bit form and decode the ASCII
		- 4A = 0100 1010 = J
		- EF = 1101 1111 = o
		- 68 = 0110 1000 = h
		- 6E = 0110 1110 = n
		- 20 = 0010 0000 = SP
		- C4 = 1100 0100 = D
		- EF = 1110 1111 = o
		- E5 = 1110 0101 = e
	b. Determine the parity used: odd or even
		- odd
