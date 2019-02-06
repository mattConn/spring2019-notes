# Homework 1

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
- (-54)+(-25) = COME BACK TO THIS

8. Convert decimal 256 and 325 to BCD codes, and perform their addition using BCD codes.
- 256 = 0010 0101 0110
- 325 = 0011 0010 0101
- sum = 0101 1000 0001

9. Convert the characters "8Ce3" to ASCII codes. Append an odd parity bit to *each letter* at the left.
- 8 C e 3 = 1000011, 0011100, 0101110, 0011011
- after parity bit = 11000011, 10011100, 10101110, 10011011

