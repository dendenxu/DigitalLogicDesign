`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:03:23 01/09/2020
// Design Name:   TOP
// Module Name:   D:/Documents/Desktop/final/TOP_sim.v
// Project Name:  final
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TOP
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TOP_sim;

	// Inputs
	reg clk;
	reg ps2_clk;
	reg ps2_data;
    reg SW;
	// Outputs
	wire hs;
	wire vs;
	wire [3:0] r;
	wire [3:0] g;
	wire [3:0] b;

	// Instantiate the Unit Under Test (UUT)
	TOP uut (
		.clk(clk), 
		.ps2_clk(ps2_clk), 
		.ps2_data(ps2_data), 
		.hs(hs), 
		.vs(vs), 
		.r(r), 
		.g(g), 
		.b(b),
        .SW(SW)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		ps2_clk = 0;
		ps2_data = 0;
        SW = 1;
        
		// Add stimulus here
        #10000000
        SW = 0;
	end
    initial begin
        clk = 0;
        forever #5 clk =~clk;
    end
endmodule

