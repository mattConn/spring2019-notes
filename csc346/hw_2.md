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
