`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:30:12 12/24/2019
// Design Name:   key2di
// Module Name:   D:/3180105504/Project/key2di_sim.v
// Project Name:  Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: key2di
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module key2di_sim;

	// Inputs
	reg [3:0] keys;

	// Outputs
	wire [1:0] di;

	// Instantiate the Unit Under Test (UUT)
	key2di uut (
		.keys(keys), 
		.di(di)
	);

	initial begin
		// Initialize Inputs
		keys = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

