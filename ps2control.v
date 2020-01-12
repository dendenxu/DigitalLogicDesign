`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:37:53 01/02/2020 
// Design Name: 
// Module Name:    ps2control 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////r////////////////////////////////////////////////////////////////
module ps2control(
		input clk, 
		input ps2_clk, 
		input ps2_data, 
		input rst,
		output reg [9:0] data, 
		output ready
		//output sampling,
		//output reg [3:0] count
    );
	 
	reg [3:0] count = 0;
	//initial count[3:0] = 0;
	reg [9:0] buffer = 0;
	reg [2:0] ps2_clk_sync = 0;
	reg data_expand = 0;
	reg data_release = 0;
	reg data_done = 0;
	wire sampling;
	 
	always @(posedge clk or negedge rst) begin
			if(!rst) ps2_clk_sync <= 0;
			else ps2_clk_sync <= {ps2_clk_sync[1:0],ps2_clk};
	end	
	assign sampling = ps2_clk_sync[2]&~ps2_clk_sync[1];
	
	always @(posedge clk or negedge rst) begin
		if(!rst) begin
			data_done <= 0;
			data_expand <= 0;
			data <= 0;
			data_release <= 0;
			buffer <= 0;
		end 
		else if(count == 4'd11) count <= 0;
		else if(sampling) begin
			if(count == 4'd10) begin
				if(buffer[8:1]==8'hE0) data_expand <= 1;
				else if(buffer[8:1]==8'hF0) data_release <= 1;
				else begin
					data <= {data_expand, data_release, buffer[8:1]};
					data_done <= 1;
					data_expand <= 0;
					data_release <= 0;
				end
			end 
			else begin
				buffer[count] <= ps2_data;
				data_done <= 0;
			end
			count <= count +3'b1;
		end
	end
	
	assign ready = data_done;
			
endmodule
