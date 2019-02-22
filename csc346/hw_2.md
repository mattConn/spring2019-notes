# CSC 346
## Homework 2
### Matthew Connelly
### 2/21/19

1. Demonstrate by means of truth tables the validity of the following identities: The distributive law: x + yz = (x+y)(x+z) 


	```
	xyz		yz		x + yz	x+y		x+z		(x+y)(x+z)
	000		0		0		0		0		0
	001		0		0		0		1		0
	010		0		0		1		0		0
	011		1		1		1		1		1
	100		0		1		1		1		1
	101		0		1		1		1		1
	110		0		1		1		1		1
	111		1		1		1		1		1
	```

2. Simplify the following Boolean expressions to a minimum number of literals.
(a) (a + b + c’)(a’b’ + c) (b) a’bc + abc’ + abc + a’bc’ (c) (a’ + c’)(a + b’ + c’)
(d) ABC’D + A’BD + ABCD (e) AB’ + A’B’D + A’CD’ 

```
a.)
(a + b + c')(a'b' + c')

= a(a'b' + c) + b(a'b' + c) + c'(a'b' + c)
= ac + bc + c'a'b'		<Ans>

b.)
a'bc + abc' + abc + a'bc'

= b(a'c + ac' + ac + a'c')
= b[ a'(c + c') + ac' + ac]
= b[ a' + a(c + c')]
= b[ a' + a ]
= b		<Ans>

c.)
(a’ + c’)(a + b’ + c’)

= [a'(a + b' + c') + c'(a + b' + c')]
= a'b' + a'c' + c'a + c'b'
= a'b' + c'(a' + a + b')
= a'b' + c'		<Ans>

d.) 
ABC’D + A’BD + ABCD

= bd[ac' + a' + ac]
= bd[a(c' + c) + a']
= bd		<Ans>

e.)
AB’ + A’B’D + A’CD’

= b'(a + a'd) + a'cd'		<I could not advance beyond this.>
```


3. Find the complement of the following expression
(a) (A’+B)C’ (b) (AB’ + C)D’ + E 

```
a.)
(A’+B)C’

=> [(a' + b)c']'
= (a' + b)' + c
= ab' + c		<Ans>

b.)
(AB’ + C)D’ + E

=> [(AB’ + C)D’ + E]'
= (ab' + c)' + de'
= a'bc' + de'		<Ans>
```

4. Draw the logic diagram for the following Boolean expressions:
(a) Y = AB + B’(A’ + C) (b) Y = (A + B’)(C’+ DE) 

`<Pictured after the break.>`

![circuit-a](hw_2-prob4-1.png)


![circuit-b](hw_2-prob4-2.png)

\newpage


5. Obtain the truth table of the function F = (A+ C)(B’ + C) and express the function in
sum of minterms and product of maxterms. 

```
abc		a+c		b'+c	(a+c)(b'+c)
000		0		1		0
001		1		1		1
010		0		0		0
011		1		1		1
100		1		1		1
101		1		1		1
110		1		0		0
111		1		1		1
```
`<Ans:>`

$\sum \min = \sum(1,3,4,5,7)$

$\Rightarrow (\sum \min)' = \Pi(0,2,6)$ \newline

6. Express the following function in sum of minterms and product of maxterms: F(a, b, c, d) = (c’ + d)(b’ + c’) 

```
(c’ + d)(b’ + c’)

= c'b' + c' + db' + dc'
= c'(b' + 1 + d) + db'
= c' + db'

<Converting to canonical form:>

=> (a + a')(b + b')(d + d')c' + db'(a + a')(c + c')
= abc'd + abc'd' + ab'c'd + ab'c'd' + a'bc'd + a'bc'd'
	+ a'b'c'd + a'b'c'd' + ab'cd + a'b'cd
```
`<Ans:>`

$= \sum(0,1,3,4,5,8,9,11,12,13)$

$\Rightarrow (\sum\min)' = \Pi(2,6,7,10,14,15)$ \newline

7. Convert the following to the other canonical form:
(a) F(x, y, z) =$\sum$(0,2,3,6) (b) F(A, B, C, D) =$\Pi$(1,3,4,6,7,8,12,15)

`a.)`

$\Rightarrow \Pi(1,4,5,7)$

`b.)`

$\Rightarrow \Pi(1,3,4,6,7,8,12,15)$

\pagebreak

8. Convert the following function into sum of products and product of sums. You need to
simplify it first.
F = (BC + D)(C + AD’) 

```
<Simplifying:>
(BC + D)(C + AD’)
= bc + bcad' + dc + 0
= bc[1 + ad'] + dc
= bc + dc
<As sum of products (and canonical form):>

(a + a')(d + d')bc + dc(a + a')(b + b')
= abcd + a'bcd + abcd' + a'bcd' + ab'cd + a'b'cd
```
`<Sum of products and product of sums:>`

`<Ans:>`

$\sum(3,6,7,11,14,15)$

$\Rightarrow (\sum\min)' = \Pi(0,1,2,4,5,8,9,10,12,13)$ \newline

9. Use Boolean algebra to prove that the following Boolean equalities are true:
(a) (a + b)’bc = 0
(b) (ab’ + a’b)’ = a’b’ + ab

```
a.)
(a + b)’bc = 0
=> a'b'bc = 0
=> 0 = 0		<Ans>

b.)
(ab’ + a’b)’ = a’b’ + ab

=> (a' + b)(a + b') = a'b' + ab
=> 0 + a'b' + ba + 0 = a'b' + ab		<Ans>
```
