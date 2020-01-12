`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:31:52 12/23/2019
// Design Name:   moving_snake
// Module Name:   D:/3180105504/Project/moving_sim.v
// Project Name:  Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: moving_snake
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module moving_sim;

	// Inputs
	reg clk;
	reg [1:0] di;
	reg [6:0] len;

	// Instantiate the Unit Under Test (UUT)
	moving_snake uut (
		.clk(clk), 
		.di(di), 
		.len(len)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		di = 0;
		len = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

