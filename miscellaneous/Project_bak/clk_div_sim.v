`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:02:25 12/24/2019
// Design Name:   clk_div
// Module Name:   D:/3180105504/Project/clk_div_sim.v
// Project Name:  Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk_div
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clk_div_sim;

	// Inputs
	reg clk;
	reg [1:0] clk_rate;

	// Outputs
	wire clk_game;

	// Instantiate the Unit Under Test (UUT)
	clk_div uut (
		.clk(clk), 
		.clk_rate(clk_rate), 
		.clk_game(clk_game)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clk_rate = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

