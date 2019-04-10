# CSC 347
# Lab 7 - Introduction to Verilog 
# Matthew Connelly
# April 9, 2019

\newpage

# Goals 
To learn how to use the Verilog hardware descriptor language (HDL) to design and simulate the half and full-adder.

# Design Procedure / Theory of Operations  
We were given several examples of verilog code used to model a half-adder in *structural*, *behavioral*, and *dataflow* model. These examples served as templates for these types of models that we had to complete. We opted for a purely-structural modeling for the remainder of the program.

## Purely Structural
```
module halfadder (S, C, x, y);
   input x, y;
   output S, C;

//Instantiate primitive gates
   xor U1(S, x, y);
   and U2(C, x, y);

endmodule
```

Having written the half-adder module, we were then tasked with writing the full-adder using two half-adders.
```
module fulladder (S, C, x, y, cin);
	input x, y, cin;
	output S, C;

	//internal signals 
	wire S1, D1, D2;

	//Instantiate the half adders 
	halfadder  HA1 (S1, D1, x, y); 
	halfadder    HA2 (S, D2, S1, cin);
	or g1(C, D2, D1);
endmodule
```

After writing the fulladder, we added a Verilog Test Fixture, where the testbench output a waveform representing the outputs for given inputs to the fulladder.

\newpage

After running the testbench program, we syntesized our program and flashed it to the Baysys2 board, where we tested the program by toggling onboard switches for each input.


# Homework
For homework, we had to write a verilog program modeling a full-bit subtractor, first as a structural-level model, and then as a dataflow-level model.

### Structural Level Model
```
module fullSubtractor1Bit(A, B, Bin, D, Bout);
	input A, B, Bin;
	ouput D, Bout;

	wire a, b, c, d;

	xor(a, A, B);

	xor(D, a, Bin);

	not(d, A);
	and(b, d, B);
	and(c, a, Bin);
	or(B, b, c);
endmodule
```

### Dataflow Level Model
```
module fullSubtractor1Bit(A, B, Bin, D, Bout);
	input A, B, Bin;
	ouput D, Bout;

	wire a, b, c;

	assign a = A ^ B;
	assign D = Bin ^ a;

	assign c = Bin && a;
	assign b = !a && B;
	assign B = c || b;
endmodule
```
