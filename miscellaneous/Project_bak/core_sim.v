`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:56:39 12/24/2019
// Design Name:   core
// Module Name:   D:/3180105504/Project/core_sim.v
// Project Name:  Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: core
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module core_sim;

	// Inputs
	reg clk;
	reg [11:0] keystroke;

	// Instantiate the Unit Under Test (UUT)
	core uut (
		.clk(clk), 
		.keystroke(keystroke)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		keystroke = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

