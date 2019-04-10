# CSC 346
## Homework 4
### Matthew Connelly
### 4/10/19

1. Draw the logic diagram of the digit circuit specified by the following Verilog description:
(a)
	```
	module Circuit_A (A, B, C, D, F);
		input A, B, C, D;
		output F;
		wire w, x, y, z, a, d;
		or (x, B, C, d);
		and (y, a ,C);
		and (w, z ,B);
		and (z, y, A);
		or (F, x, w);
		not (a, A);
		not (d, D);
	endmodule
	```
![](hw4-1.png);

\newpage

(b)
	```
	module Circuit_B (y1, y2, y3, a, b);
		output y1, y2, y3;
		input a, b;
		assign y1 = a || b;
		and (y2, a, b);
		assign y3 = a && b;
	endmodule
	```

![](hw4-2.png)

\newpage

2.
(a) Write a Verilog description of the circuit shown below 
	```
	module Circuit(F, A, A_bar, B, B_bar, C, D_bar);
		output F;
		input A, A_bar, B, B_bar, C, D_bar;
		wire a,b,c,d;

		and(a, A, B_bar);
		and(b, A_bar, B);
		or(d, a, b);

		or(c, C, D_bar);

		and(F, d, c);
	endmodule;
	```

(b) write a Verilog description of the circuit specified by the following Boolean function:
```
Z = (A + B’)C’(C + D) 
```

\newpage

```
<Simplified>
Z = C'D(A + B')
```
![](hw4-3.png)
```
module Circuit(Z, A, B_bar, C_bar, D);
	input A, B_bar, C_bar, D;
	output Z;
	wire a, b;

	or(a, A, B_bar);
	and(b, C_bar, D);
	and(Z, a, b);
endmodule
```
\newpage


