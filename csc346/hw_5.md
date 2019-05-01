# CSC 346
## Homework 5
### Matthew Connelly
### 4/17/19

1. Construct a 5-to-32 line decoder with four 3-to-8 line decoder with enable and a 2-to-4
line decoder. Use block diagrams for the components, label all inputs and outputs.

!()[]

2. A combinational circuit is defined by the following three Boolean functions:

$$
F1 = x’y’z’ + xz
$$
$$
F2 = xy’z’ + x’y
$$
$$
F3 = x’y’z + xy
$$

 Design the circuit with a decoder and external gates. Draw the diagram, and label all inputs
and outputs.

3. Design a 4-input priority encoder with inputs as in Table 4-8, but with input D3 having
the lowest priority and input D0 the highest priority. Derive the truth-table, obtain the
simplified function for eacch output using K-map and draw the logic diagram.

4. Construct a 16x1 multiplexer with two 8x1 and one 2x1 multiplexers. Use block
diagrams and label all inputs and outputs.

5. Implement a full adder with two 4x1 multiplexers. Draw the truth-table, diagram and
label the inputs and outputs.

6. An 8x1 multiplexer has inputs A, B, And C connected to the selection inputs S2, S1, and
S0, respectively. The data inputs I0 through I7 are as follows
I1 = I2 = 0, I3 = I7 = 1; I4 = I5 = D; and I0 = I6 = D’;
Determine the Boolean function that the multiplexer implements.
7. (a) Write a behavioral Verilog code for a 3x8 decoder, and then write a gate level
(structural) hierarchical model of a 4x16 decoder circuit constructing from two of the
3x8 decoders you wrote in (a), according to the following diagram. If you want, you can
test your code using the simulator at http://www.techep.csi.cuny.edu/~zhangs/v.html,
where you can also find Verilog code example of decoder in dataflow level and the
corresponding test bench. 
4x 16 decoder
8. Using a case
statement, write an HDL behavioral description of a eight-bit arithmetic logic unit
(ALU). The circuit has a three-bit select bus (Sel), sixteen-bit input datapaths (A[15:0]
and B[15:0]), an eight-bit output datapath (y[15:0]), and performs the arithmetic and
logic operations listed below.
Sel Operation Description
000 y = 8’b0
001 y = A & B Bitwise AND
010 y = A | B Bitwise OR
011 y = A ^ B Bitwise exclusive OR
100 y = ~ A Bitwise complement
101 y = A - B Subtract
110 y = A + B Add (Assume A and B are unsigned)
111 y = 8’hFF 
