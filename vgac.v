`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:53:15 01/01/2020 
// Design Name: 
// Module Name:    vgac 
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
//////////////////////////////////////////////////////////////////////////////////
module vgac(
		input clk,
		input rst,
		input [11:0] Din,
		output reg [8:0] row,
		output reg [9:0] col,
		output reg rdn,
		output reg [3:0]R,G,B,
		output reg HS, VS
    );
		// 行扫描
		reg [9:0] h_count;
		always@(posedge clk) begin
			if(!rst)	h_count<=10'h0;
			else if (h_count == 10'd799)
						h_count <=10'h0;
				else	h_count <= h_count + 10'h1;
		end
		//	列扫描
		reg [9:0] v_count;
		always@(posedge clk or negedge rst) begin
			if(!rst) v_count <= 10'h0;
			else if (h_count == 10'd799) begin
				if(v_count == 10'd524) v_count <= 10'h0;
				else v_count <= v_count + 10'h1;
			end		
		end
		//	将像素地址与物理位置对应
		wire [9:0] row_addr = v_count - 10'd43;
		wire [9:0] col_addr = h_count - 10'd143;
		wire h_sync = (h_count > 10'd85);
		wire v_sync = (v_count > 10'd1);
		wire read = (h_count > 10'd142) &&
						(h_count < 10'd783) &&
						(v_count > 10'd42)  &&
						(v_count < 10'd523);
		//	RGB赋值
		always@(posedge clk) begin
			row <= row_addr[8:0];
			col <= col_addr;
			rdn <= ~read;
			HS <= h_sync;
			VS <= v_sync;
			R 	<= rdn ? 4'h0 : Din[3:0];
			G 	<= rdn ? 4'h0 : Din[7:4];
			B	<= rdn ? 4'h0 : Din[11:8];
		end


endmodule
