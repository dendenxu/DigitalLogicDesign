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
/* verilator lint_off STMTDLY */

module moving_sim;

    // Inputs
    reg clk;
    reg [1:0] di;
    reg [3:0] len;
    reg [9:0][15:0] prev_pos_num;
    wire [9:0][15:0] next_pos_num;
    wire should_stop;

    // Instantiate the Unit Under Test (UUT)
    moving_snake uut (
        .clk(clk), 
        .di(di), 
        .len(len),
        .prev_pos_num(prev_pos_num),
        .next_pos_num(next_pos_num),
        .should_stop(should_stop)
    );

    initial begin
        // Initialize Inputs
        #100;
        di = 2'b01;
        len = 1;
        // Wait 100 ns for global reset to finish
        
        // Add stimulus here
    end
    generate
    genvar i;
    for (i=0; i<16; i = i+1) begin
        initial prev_pos_num[i] = i;
    end
    endgenerate
    initial begin
        clk = 0;
        forever begin
            #10 clk = ~clk;
        end
    end

      
endmodule

