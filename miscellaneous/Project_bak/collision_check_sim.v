`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:12:51 12/26/2019
// Design Name:   collision_check
// Module Name:   D:/3180105504/Project/collision_check_sim.v
// Project Name:  Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: collision_check
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module collision_check_sim;

	// Inputs
	reg [159:0] snake1;
	reg [159:0] snake2;
	reg clk;

	// Outputs
	wire should_stop1;
	wire should_stop2;

	// Instantiate the Unit Under Test (UUT)
	collision_check uut (
		.snake1(snake1), 
		.snake2(snake2), 
		.clk(clk), 
		.should_stop1(should_stop1), 
		.should_stop2(should_stop2)
	);

	initial begin
		// Initialize Inputs
		snake1 = 0;
		snake2 = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

