`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:31:56 01/03/2020 
// Design Name: 
// Module Name:    getinput 
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
module getinput(
		input clk,
		input [9:0] data,
		input clk_valid,
		output reg [12:0] key_stroke
    );

		reg [3:0]direct_reg1 = 4'b1;			//the corresponding key is press(1) or not(0)
		reg [3:0]direct_reg2 = 4'b1;
		//reg save_button = 1;
		reg [9:0]last_data;
		reg speed_lock = 0;
		initial key_stroke = 12'b000000010001;
		
		always @(posedge clk) begin
			if(data == {last_data}) ;
			else begin
				if (data[8] == 0) begin
					case (data[7:0])
						8'h1C: begin						//A
							direct_reg1 = 4'b0001;
						end
						8'h23: begin						//D
							direct_reg1 = 4'b0010;
						end
						8'h1D: begin						//W
							direct_reg1 = 4'b0100;
						end
						8'h1B: begin						//S
							direct_reg1 = 4'b1000;
						end
						8'h6B: begin						//left key
							if(data[9]==1) direct_reg2 = 4'b0001;
						end
						8'h74: begin						//right key
							if(data[9]==1) direct_reg2 = 4'b0010;
						end
						8'h75: begin						//up key
							if(data[9]==1) direct_reg2 = 4'b0100;
						end
						8'h72: begin						//down key
							if(data[9]==1) direct_reg2 = 4'b1000;
						end
						8'h44: begin
							key_stroke[9] <=~key_stroke[9];		//save or begin
						end
						8'h66: begin
							key_stroke[8] <=1;				//backspace key :clear
						end
						8'h5A: begin							//enter key: begin
							key_stroke[12] <= 1;
						end
					endcase
				end
				else if(data[8] == 1) begin
					case (data[7:0])
					8'h1C: begin
						direct_reg1[0] = 0;
					end
					8'h23: begin
						direct_reg1[1] = 0;
					end
					8'h1D: begin
						direct_reg1[2] = 0; 
					end
					8'h1B: begin
						direct_reg1[3] = 0;
					end
					8'h6B: begin
						if(data[9]==1) direct_reg2[0] = 0;
					end
					8'h74: begin
						if(data[9]==1) direct_reg2[1] = 0;
					end
					8'h75: begin
						if(data[9]==1) direct_reg2[2] = 0;
					end
					8'h72: begin
						if(data[9]==1) direct_reg2[3] = 0;
					end
					8'h66: begin						//backspace key :clear reset
						key_stroke[8] <=0;
					end
					//8'h5A: begin						//enter key: already begin
						//key_stroke[12] <= 0;
					//end
					endcase					
				end	
			end
			last_data = data;
		end
		
		always @(posedge clk) begin
			if(data[8] == 1) begin
				if(data[7:0] == 8'h41 || data[7:0] == 8'h49) speed_lock <= 0;
			end
			else if(data[7:0] == 8'h41) begin				// ¡° < " speed up
				if(speed_lock == 0) begin						//first legal pulse
					key_stroke[10] <=1;
					speed_lock <= 1;
				end
				//key_stroke[11] <=0;
			end
			else if(data[7:0] == 8'h49) begin				//  ¡° > ¡± slow dowm
				if(speed_lock == 0) begin						//first legal pulse
					key_stroke[11] <=1;
					speed_lock <= 1;
				end
				//key_stroke[10] <=0;
			end
			if(speed_lock==1) begin
				key_stroke[10] <=0;								//reset 0
				key_stroke[11] <=0;								//reset 0
			end
				
		end
		
		always @(posedge clk_valid) begin
			if(direct_reg1 != 4'b0 )  
			key_stroke[3:0]<= direct_reg1; 
			//else keep the same
			if(direct_reg2 != 4'b0 ) 
			key_stroke[7:4] <= direct_reg2;
			//else keep the same
		end
		
endmodule
