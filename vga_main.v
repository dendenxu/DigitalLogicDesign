`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:58:44 01/01/2020 
// Design Name: 
// Module Name:    vga_main 
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
module vga_main(
	
		// from core.v
		
		input reg [159:0] snake1,
		input reg [159:0] snake2,
		input reg [3:0] score1,
		input reg [3:0] score2,
		input reg [9:0] food1,
		input reg [9:0] food2,	
		
		input game_over,
		// from keyboard
		input wire [12:0] keystroke,
		//	for vgac
		input vga_clk,
		input vga_rst,
		
		// from vgac
		output wire hs, vs,
		output wire [3:0] r,g,b
    );
	 	 wire [9:0] row_addr;
		 wire [9:0] col_addr;
		 reg [159:0] snake1;
		 reg [159:0] snake2;
		 reg [3:0] score1;
		 reg [3:0] score2;
		 reg [9:0] food1;
		 reg [9:0] food2;
		initial begin 
			snake1 <= 160'b1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1000000110_1000000111;			
			snake2 <= 160'b1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_1111111111_0110010100_0110010101;
			food1 <= 456;
			food2 <= 265;
			score1 <= 02;
			score2 <= 13;
		end
		/**
	* ip core parameters:
	* 	.addra		=>  input where we want to get the data
	*	.douta		=>  output .addra's data
	*	.clka		=>  clock
	*
	* ip core instances:
	*	StartMenu => ics --- startmenu img  640*480		
	* 	Continue  => icpause --- pause img  50*50 			(x)
	*  GameOver	 => icgo --- gameover		640*480	
	*	Background=> icb --- background 640*480
	*	s1b => ics1b --- basic block of snake1 20*20
	*	s1h => ics1h --- basic block of snake1's head 20*20
	*	s2b => ics2b --- basic block of snake2 20*20
	*	s2h => ics2h --- basic block of snake2's head 20*20
	*	number0~9 => icnum0 ~ icnum9 --- number 0 ~ number 9  
				=>   to display the score  50*25
	*	Food1 => icf1 --- food1		 20*20
	*	Food2 => icf2 --- food2 	 20*20
				<=    food can be eaten by both two snakes
	*/
	
	// call vgac
	reg [11:0] vga_data;
	vgac v0(.clk(vga_clk), .rst(vga_rst), .Din(vga_data), .row(row_addr), .col(col_addr), .R(r), .G(g), .B(b), .HS(hs), .VS(vs));
	
	/* start menu */
	reg  [18:0] stm_addr;		//524288-1 > 307200 = 640*480
	wire [11:0] stm_data;
	
	StartMenu ics(.clka(vga_clk), .addra(stm_addr), .douta(stm_data));
	
	always @ (posedge vga_clk) begin
		stm_addr <= (row_addr>=0 && row_addr<=479 && col_addr>=0 && col_addr<=639)?((479-row_addr)*640+col_addr):0;
	end
	
	/* pause */
	/*
	reg [19:0] con_addr;
	wire [11:0] con_data;
	
	reg [18:0] con_row;
	reg [18:0] con_col;
	
	initial begin
		con_row = 215;
		con_col = 295;
	end
	
	Continue icpause(.clka(vga_clk), .addra(con_addr), .douta(con_data));
	
	always @ (posedge vga_clk) begin
		con_addr <= (row_addr>=con_row && row_addr<=con_row+49 && col_addr>=con_col && col_addr<=con_col+49)?((49-(row_addr-con_row))*50+(col_addr-con_col)):0;
	end*/
	
	/* gameover */
	reg [19:0] go_addr;
	wire [11:0] go_data;
	
	GameOver icgo(.clka(vga_clk), .addra(go_addr), .douta(go_data));
	
	always @ (posedge vga_clk) begin
		go_addr <= (row_addr>=0 && row_addr<=479 && col_addr>=0 && col_addr<=639)?((479-row_addr)*640+col_addr):0;
	end
	
	/* background */
	reg [19:0] bg_addr;
	wire [11:0] bg_data;
	
	Background icb(.clka(vga_clk), .addra(bg_addr), .douta(bg_data));
	
	always @ (posedge vga_clk) begin
		bg_addr <= (row_addr>=0 && row_addr<=479 && col_addr>=0 && col_addr<=639)?((479-row_addr)*640+col_addr):0;
	end
	
	/* food */
	reg [9:0] f1_row;
	reg [9:0] f1_col;
	reg [9:0] f2_row;
	reg [9:0] f2_col;
	reg [9:0] f1_ic_addr;		//	512 > 400 = 20*20
	reg [9:0] f2_ic_addr; 		
	wire [11:0] f1_data;
	wire [11:0] f2_data;  
	
	Food1 icf1(.clka(vga_clk), .addra(f1_ic_addr), .douta(f1_data));
	Food2 icf2(.clka(vga_clk), .addra(f2_ic_addr), .douta(f2_data));
	
	always @ (posedge vga_clk) begin
		f1_row <= food1 / 32 * 20;
		f1_col <= (food1%32) * 20;
		f2_row <= food2 / 32 * 20;
		f2_col <= (food2%32) * 20;
		if (row_addr>=f1_row && row_addr<=f1_row +19 && col_addr>=f1_col && col_addr<=f1_col+19)
			f1_ic_addr <= (19-(row_addr - f1_row))*20 + (col_addr - f1_col);
		else f1_ic_addr <= 0;
		if (row_addr>=f2_row && row_addr<=f2_row +19 && col_addr>=f2_col && col_addr<=f2_col+19)
			f2_ic_addr <= (19-(row_addr - f2_row))*20 + (col_addr - f2_col);
		else f2_ic_addr <= 0;
	end
	
	/* snakes */
	reg [159:0] snake1_addr;
	wire [191:0] snake1_data;
	reg [159:0] snake1_row;
	reg [159:0] snake1_col;
	
	s1h ics1head(.clka(vga_clk), .addra(snake1_addr[9:0]), .douta(snake1_data[11:0]));
	s1b ics1body1(.clka(vga_clk), .addra(snake1_addr[19:10]), .douta(snake1_data[23:12]));
	s1b ics1body2(.clka(vga_clk), .addra(snake1_addr[29:20]), .douta(snake1_data[35:24]));
	s1b ics1body3(.clka(vga_clk), .addra(snake1_addr[39:30]), .douta(snake1_data[47:36]));
	s1b ics1body4(.clka(vga_clk), .addra(snake1_addr[49:40]), .douta(snake1_data[59:48]));
	s1b ics1body5(.clka(vga_clk), .addra(snake1_addr[59:50]), .douta(snake1_data[71:60]));
	s1b ics1body6(.clka(vga_clk), .addra(snake1_addr[69:60]), .douta(snake1_data[83:72]));
	s1b ics1body7(.clka(vga_clk), .addra(snake1_addr[79:70]), .douta(snake1_data[95:84]));
	s1b ics1body8(.clka(vga_clk), .addra(snake1_addr[89:80]), .douta(snake1_data[107:96]));
	s1b ics1body9(.clka(vga_clk), .addra(snake1_addr[99:90]), .douta(snake1_data[119:108]));
	s1b ics1body10(.clka(vga_clk), .addra(snake1_addr[109:100]), .douta(snake1_data[131:120]));
	s1b ics1body11(.clka(vga_clk), .addra(snake1_addr[119:110]), .douta(snake1_data[143:132]));
	s1b ics1body12(.clka(vga_clk), .addra(snake1_addr[129:120]), .douta(snake1_data[155:144]));
	s1b ics1body13(.clka(vga_clk), .addra(snake1_addr[139:130]), .douta(snake1_data[167:156]));
	s1b ics1body14(.clka(vga_clk), .addra(snake1_addr[149:140]), .douta(snake1_data[179:168]));
	s1b ics1body15(.clka(vga_clk), .addra(snake1_addr[159:150]), .douta(snake1_data[191:180]));
	
	reg [159:0] snake2_addr;
	wire [191:0] snake2_data;
	reg [159:0] snake2_row;
	reg [159:0] snake2_col;	
	
	s2h ics2head(.clka(vga_clk), .addra(snake2_addr[9:0]), .douta(snake2_data[11:0]));
	s2b ics2body1(.clka(vga_clk), .addra(snake2_addr[19:10]), .douta(snake2_data[23:12]));
	s2b ics2body2(.clka(vga_clk), .addra(snake2_addr[29:20]), .douta(snake2_data[35:24]));
	s2b ics2body3(.clka(vga_clk), .addra(snake2_addr[39:30]), .douta(snake2_data[47:36]));
	s2b ics2body4(.clka(vga_clk), .addra(snake2_addr[49:40]), .douta(snake2_data[59:48]));
	s2b ics2body5(.clka(vga_clk), .addra(snake2_addr[59:50]), .douta(snake2_data[71:60]));
	s2b ics2body6(.clka(vga_clk), .addra(snake2_addr[69:60]), .douta(snake2_data[83:72]));
	s2b ics2body7(.clka(vga_clk), .addra(snake2_addr[79:70]), .douta(snake2_data[95:84]));
	s2b ics2body8(.clka(vga_clk), .addra(snake2_addr[89:80]), .douta(snake2_data[107:96]));
	s2b ics2body9(.clka(vga_clk), .addra(snake2_addr[99:90]), .douta(snake2_data[119:108]));
	s2b ics2body10(.clka(vga_clk), .addra(snake2_addr[109:100]), .douta(snake2_data[131:120]));
	s2b ics2body11(.clka(vga_clk), .addra(snake2_addr[119:110]), .douta(snake2_data[143:132]));
	s2b ics2body12(.clka(vga_clk), .addra(snake2_addr[129:120]), .douta(snake2_data[155:144]));
	s2b ics2body13(.clka(vga_clk), .addra(snake2_addr[139:130]), .douta(snake2_data[167:156]));
	s2b ics2body14(.clka(vga_clk), .addra(snake2_addr[149:140]), .douta(snake2_data[179:168]));
	s2b ics2body15(.clka(vga_clk), .addra(snake2_addr[159:150]), .douta(snake2_data[191:180]));
	
	always @ (posedge vga_clk) begin
		// snake1
		if(snake1[9:0] != 10'b11_1111_1111) begin 
			snake1_row[9:0] <= snake1[9:0]/32*20;
			snake1_col[9:0] <= (snake1[9:0]%32)*20;
		end
		if(snake1[19:10] != 10'b11_1111_1111) begin 
			snake1_row[19:10] <= snake1[19:10]/32*20;
			snake1_col[19:10] <= (snake1[19:10]%32)*20;
		end
		if(snake1[29:20] != 10'b11_1111_1111) begin 
			snake1_row[29:20] <= snake1[29:20]/32*20;
			snake1_col[29:20] <= (snake1[29:20]%32)*20;
		end
		if(snake1[39:30] != 10'b11_1111_1111) begin 
			snake1_row[39:30] <= snake1[39:30]/32*20;
			snake1_col[39:30] <= (snake1[39:30]%32)*20;
		end
		if(snake1[49:40] != 10'b11_1111_1111) begin 
			snake1_row[49:40] <= snake1[49:40]/32*20;
			snake1_col[49:40] <= (snake1[49:40]%32)*20;
		end
		if(snake1[59:50] != 10'b11_1111_1111) begin 
			snake1_row[59:50] <= snake1[59:50]/32*20;
			snake1_col[59:50] <= (snake1[59:50]%32)*20;
		end
		if(snake1[69:60] != 10'b11_1111_1111) begin 
			snake1_row[69:60] <= snake1[69:60]/32*20;
			snake1_col[69:60] <= (snake1[69:60]%32)*20;
		end
		if(snake1[79:70] != 10'b11_1111_1111) begin 
			snake1_row[79:70] <= snake1[79:70]/32*20;
			snake1_col[79:70] <= (snake1[79:70]%32)*20;
		end
		if(snake1[89:80] != 10'b11_1111_1111) begin 
			snake1_row[89:80] <= snake1[89:80]/32*20;
			snake1_col[89:80] <= (snake1[89:80]%32)*20;
		end
		if(snake1[99:90] != 10'b11_1111_1111) begin 
			snake1_row[99:90] <= snake1[99:90]/32*20;
			snake1_col[99:90] <= (snake1[99:90]%32)*20;
		end
		if(snake1[109:100] != 10'b11_1111_1111) begin 
			snake1_row[109:100] <= snake1[109:100]/32*20;
			snake1_col[109:100] <= (snake1[109:100]%32)*20;
		end
		if(snake1[119:110] != 10'b11_1111_1111) begin 
			snake1_row[119:110] <= snake1[119:110]/32*20;
			snake1_col[119:110] <= (snake1[119:110]%32)*20;
		end	
		if(snake1[129:120] != 10'b11_1111_1111) begin 
			snake1_row[129:120] <= snake1[129:120]/32*20;
			snake1_col[129:120] <= (snake1[129:120]%32)*20;
		end	
		if(snake1[139:130] != 10'b11_1111_1111) begin 
			snake1_row[139:130] <= snake1[139:130]/32*20;
			snake1_col[139:130] <= (snake1[139:130]%32)*20;
		end	
		if(snake1[149:140] != 10'b11_1111_1111) begin 
			snake1_row[149:140] <= snake1[149:140]/32*20;
			snake1_col[149:140] <= (snake1[149:140]%32)*20;
		end	
		if(snake1[159:150] != 10'b11_1111_1111) begin 
			snake1_row[159:150] <= snake1[159:150]/32*20;
			snake1_col[159:150] <= (snake1[159:150]%32)*20;
		end	
		// snake2
		if(snake2[9:0] != 10'b11_1111_1111) begin 
			snake2_row[9:0] <= snake2[9:0]/32*20;
			snake2_col[9:0] <= (snake2[9:0]%32)*20;
		end
		if(snake2[19:10] != 10'b11_1111_1111) begin 
			snake2_row[19:10] <= snake2[19:10]/32*20;
			snake2_col[19:10] <= (snake2[19:10]%32)*20;
		end
		if(snake2[29:20] != 10'b11_1111_1111) begin 
			snake2_row[29:20] <= snake2[29:20]/32*20;
			snake2_col[29:20] <= (snake2[29:20]%32)*20;
		end
		if(snake2[39:30] != 10'b11_1111_1111) begin 
			snake2_row[39:30] <= snake2[39:30]/32*20;
			snake2_col[39:30] <= (snake2[39:30]%32)*20;
		end
		if(snake2[49:40] != 10'b11_1111_1111) begin 
			snake2_row[49:40] <= snake2[49:40]/32*20;
			snake2_col[49:40] <= (snake2[49:40]%32)*20;
		end
		if(snake2[59:50] != 10'b11_1111_1111) begin 
			snake2_row[59:50] <= snake2[59:50]/32*20;
			snake2_col[59:50] <= (snake2[59:50]%32)*20;
		end
		if(snake2[69:60] != 10'b11_1111_1111) begin 
			snake2_row[69:60] <= snake2[69:60]/32*20;
			snake2_col[69:60] <= (snake2[69:60]%32)*20;
		end
		if(snake2[79:70] != 10'b11_1111_1111) begin 
			snake2_row[79:70] <= snake2[79:70]/32*20;
			snake2_col[79:70] <= (snake2[79:70]%32)*20;
		end
		if(snake2[89:80] != 10'b11_1111_1111) begin 
			snake2_row[89:80] <= snake2[89:80]/32*20;
			snake2_col[89:80] <= (snake2[89:80]%32)*20;
		end
		if(snake2[99:90] != 10'b11_1111_1111) begin 
			snake2_row[99:90] <= snake2[99:90]/32*20;
			snake2_col[99:90] <= (snake2[99:90]%32)*20;
		end
		if(snake2[109:100] != 10'b11_1111_1111) begin 
			snake2_row[109:100] <= snake2[109:100]/32*20;
			snake2_col[109:100] <= (snake2[109:100]%32)*20;
		end
		if(snake2[119:110] != 10'b11_1111_1111) begin 
			snake2_row[119:110] <= snake2[119:110]/32*20;
			snake2_col[119:110] <= (snake2[119:110]%32)*20;
		end	
		if(snake2[129:120] != 10'b11_1111_1111) begin 
			snake2_row[129:120] <= snake2[129:120]/32*20;
			snake2_col[129:120] <= (snake2[129:120]%32)*20;
		end	
		if(snake2[139:130] != 10'b11_1111_1111) begin 
			snake2_row[139:130] <= snake2[139:130]/32*20;
			snake2_col[139:130] <= (snake2[139:130]%32)*20;
		end	
		if(snake2[149:140] != 10'b11_1111_1111) begin 
			snake2_row[149:140] <= snake2[149:140]/32*20;
			snake2_col[149:140] <= (snake2[149:140]%32)*20;
		end	
		if(snake2[159:150] != 10'b11_1111_1111) begin 
			snake2_row[159:150] <= snake2[159:150]/32*20;
			snake2_col[159:150] <= (snake2[159:150]%32)*20;
		end	
		
		// judge address
		if(row_addr>=snake1_row[9:0] && row_addr<=snake1_row[9:0]+19 && 
			col_addr>=snake1_col[9:0] && col_addr<=snake1_col[9:0]+19)
			snake1_addr[9:0] <= (19-(row_addr - snake1_row[9:0]))*20 + (col_addr - snake1_col[9:0]);
		else	snake1_addr[9:0] <= 0;
		
		if(row_addr>=snake1_row[19:10] && row_addr<=snake1_row[19:10]+19 && 
			col_addr>=snake1_col[19:10] && col_addr<=snake1_col[19:10]+19)
			snake1_addr[19:10] <= (19-(row_addr - snake1_row[19:10]))*20 + (col_addr - snake1_col[19:10]);
		else	snake1_addr[19:10] <= 0;
		
		if(row_addr>=snake1_row[29:20] && row_addr<=snake1_row[29:20]+19 && 
			col_addr>=snake1_col[29:20] && col_addr<=snake1_col[29:20]+19)
			snake1_addr[29:20] <= (19-(row_addr - snake1_row[29:20]))*20 + (col_addr - snake1_col[29:20]);
		else	snake1_addr[29:20] <= 0;
		
		if(row_addr>=snake1_row[39:30] && row_addr<=snake1_row[39:30]+19 && 
			col_addr>=snake1_col[39:30] && col_addr<=snake1_col[39:30]+19)
			snake1_addr[39:30] <= (19-(row_addr - snake1_row[39:30]))*20 + (col_addr - snake1_col[39:30]);
		else	snake1_addr[39:30] <= 0;
		
		if(row_addr>=snake1_row[49:40] && row_addr<=snake1_row[49:40]+19 && 
			col_addr>=snake1_col[49:40] && col_addr<=snake1_col[49:40]+19)
			snake1_addr[49:40] <= (19-(row_addr - snake1_row[49:40]))*20 + (col_addr - snake1_col[49:40]);
		else	snake1_addr[49:40] <= 0;
		
		if(row_addr>=snake1_row[59:50] && row_addr<=snake1_row[59:50]+19 && 
			col_addr>=snake1_col[59:50] && col_addr<=snake1_col[59:50]+19)
			snake1_addr[59:50] <= (19-(row_addr - snake1_row[59:50]))*20 + (col_addr - snake1_col[59:50]);
		else	snake1_addr[59:50] <= 0;
		
		if(row_addr>=snake1_row[69:60] && row_addr<=snake1_row[69:60]+19 && 
			col_addr>=snake1_col[69:60] && col_addr<=snake1_col[69:60]+19)
			snake1_addr[69:60] <= (19-(row_addr - snake1_row[69:60]))*20 + (col_addr - snake1_col[69:60]);
		else	snake1_addr[69:60] <= 0;
		
		if(row_addr>=snake1_row[79:70] && row_addr<=snake1_row[79:70]+19 && 
			col_addr>=snake1_col[79:70] && col_addr<=snake1_col[79:70]+19)
			snake1_addr[79:70] <= (19-(row_addr - snake1_row[79:70]))*20 + (col_addr - snake1_col[79:70]);
		else	snake1_addr[79:70] <= 0;
		
		if(row_addr>=snake1_row[89:80] && row_addr<=snake1_row[89:80]+19 && 
			col_addr>=snake1_col[89:80] && col_addr<=snake1_col[89:80]+19)
			snake1_addr[89:80] <= (19-(row_addr - snake1_row[89:80]))*20 + (col_addr - snake1_col[89:80]);
		else	snake1_addr[89:80] <= 0;
		
		if(row_addr>=snake1_row[99:90] && row_addr<=snake1_row[99:90]+19 && 
			col_addr>=snake1_col[99:90] && col_addr<=snake1_col[99:90]+19)
			snake1_addr[99:90] <= (19-(row_addr - snake1_row[99:90]))*20 + (col_addr - snake1_col[99:90]);
		else	snake1_addr[99:90] <= 0;
		
		if(row_addr>=snake1_row[109:100] && row_addr<=snake1_row[109:100]+19 && 
			col_addr>=snake1_col[109:100] && col_addr<=snake1_col[109:100]+19)
			snake1_addr[109:100] <= (19-(row_addr - snake1_row[109:100]))*20 + (col_addr - snake1_col[109:100]);
		else	snake1_addr[109:100] <= 0;
		
		if(row_addr>=snake1_row[119:110] && row_addr<=snake1_row[119:110]+19 && 
			col_addr>=snake1_col[119:110] && col_addr<=snake1_col[119:110]+19)
			snake1_addr[119:110] <= (19-(row_addr - snake1_row[119:110]))*20 + (col_addr - snake1_col[119:110]);
		else	snake1_addr[119:110] <= 0;
		
		if(row_addr>=snake1_row[129:120] && row_addr<=snake1_row[129:120]+19 && 
			col_addr>=snake1_col[129:120] && col_addr<=snake1_col[129:120]+19)
			snake1_addr[129:120] <= (19-(row_addr - snake1_row[129:120]))*20 + (col_addr - snake1_col[129:120]);
		else	snake1_addr[129:120] <= 0;
		
		if(row_addr>=snake1_row[139:130] && row_addr<=snake1_row[139:130]+19 && 
			col_addr>=snake1_col[139:130] && col_addr<=snake1_col[139:130]+19)
			snake1_addr[139:130] <= (19-(row_addr - snake1_row[139:130]))*20 + (col_addr - snake1_col[139:130]);
		else	snake1_addr[139:130] <= 0;
		
		if(row_addr>=snake1_row[149:140] && row_addr<=snake1_row[149:140]+19 && 
			col_addr>=snake1_col[149:140] && col_addr<=snake1_col[149:140]+19)
			snake1_addr[149:140] <= (19-(row_addr - snake1_row[149:140]))*20 + (col_addr - snake1_col[149:140]);
		else	snake1_addr[149:140] <= 0;
		
		if(row_addr>=snake1_row[159:150] && row_addr<=snake1_row[159:150]+19 && 
			col_addr>=snake1_col[159:150] && col_addr<=snake1_col[159:150]+19)
			snake1_addr[159:150] <= (19-(row_addr - snake1_row[159:150]))*20 + (col_addr - snake1_col[159:150]);
		else	snake1_addr[159:150] <= 0;
		
		
		if(row_addr>=snake2_row[9:0] && row_addr<=snake2_row[9:0]+19 && 
			col_addr>=snake2_col[9:0] && col_addr<=snake2_col[9:0]+19)
			snake2_addr[9:0] <= (19-(row_addr - snake2_row[9:0]))*20 + (col_addr - snake2_col[9:0]);
		else	snake2_addr[9:0] <= 0;
		
		if(row_addr>=snake2_row[19:10] && row_addr<=snake2_row[19:10]+19 && 
			col_addr>=snake2_col[19:10] && col_addr<=snake2_col[19:10]+19)
			snake2_addr[19:10] <= (19-(row_addr - snake2_row[19:10]))*20 + (col_addr - snake2_col[19:10]);
		else	snake2_addr[19:10] <= 0;
		
		if(row_addr>=snake2_row[29:20] && row_addr<=snake2_row[29:20]+19 && 
			col_addr>=snake2_col[29:20] && col_addr<=snake2_col[29:20]+19)
			snake2_addr[29:20] <= (19-(row_addr - snake2_row[29:20]))*20 + (col_addr - snake2_col[29:20]);
		else	snake2_addr[29:20] <= 0;
		
		if(row_addr>=snake2_row[39:30] && row_addr<=snake2_row[39:30]+19 && 
			col_addr>=snake2_col[39:30] && col_addr<=snake2_col[39:30]+19)
			snake2_addr[39:30] <= (19-(row_addr - snake2_row[39:30]))*20 + (col_addr - snake2_col[39:30]);
		else	snake2_addr[39:30] <= 0;
		
		if(row_addr>=snake2_row[49:40] && row_addr<=snake2_row[49:40]+19 && 
			col_addr>=snake2_col[49:40] && col_addr<=snake2_col[49:40]+19)
			snake2_addr[49:40] <= (19-(row_addr - snake2_row[49:40]))*20 + (col_addr - snake2_col[49:40]);
		else	snake2_addr[49:40] <= 0;
		
		if(row_addr>=snake2_row[59:50] && row_addr<=snake2_row[59:50]+19 && 
			col_addr>=snake2_col[59:50] && col_addr<=snake2_col[59:50]+19)
			snake2_addr[59:50] <= (19-(row_addr - snake2_row[59:50]))*20 + (col_addr - snake2_col[59:50]);
		else	snake2_addr[59:50] <= 0;
		
		if(row_addr>=snake2_row[69:60] && row_addr<=snake2_row[69:60]+19 && 
			col_addr>=snake2_col[69:60] && col_addr<=snake2_col[69:60]+19)
			snake2_addr[69:60] <= (19-(row_addr - snake2_row[69:60]))*20 + (col_addr - snake2_col[69:60]);
		else	snake2_addr[69:60] <= 0;
		
		if(row_addr>=snake2_row[79:70] && row_addr<=snake2_row[79:70]+19 && 
			col_addr>=snake2_col[79:70] && col_addr<=snake2_col[79:70]+19)
			snake2_addr[79:70] <= (19-(row_addr - snake2_row[79:70]))*20 + (col_addr - snake2_col[79:70]);
		else	snake2_addr[79:70] <= 0;
		
		if(row_addr>=snake2_row[89:80] && row_addr<=snake2_row[89:80]+19 && 
			col_addr>=snake2_col[89:80] && col_addr<=snake2_col[89:80]+19)
			snake2_addr[89:80] <= (19-(row_addr - snake2_row[89:80]))*20 + (col_addr - snake2_col[89:80]);
		else	snake2_addr[89:80] <= 0;
		
		if(row_addr>=snake2_row[99:90] && row_addr<=snake2_row[99:90]+19 && 
			col_addr>=snake2_col[99:90] && col_addr<=snake2_col[99:90]+19)
			snake2_addr[99:90] <= (19-(row_addr - snake2_row[99:90]))*20 + (col_addr - snake2_col[99:90]);
		else	snake2_addr[99:90] <= 0;
		
		if(row_addr>=snake2_row[109:100] && row_addr<=snake2_row[109:100]+19 && 
			col_addr>=snake2_col[109:100] && col_addr<=snake2_col[109:100]+19)
			snake2_addr[109:100] <= (19-(row_addr - snake2_row[109:100]))*20 + (col_addr - snake2_col[109:100]);
		else	snake2_addr[109:100] <= 0;
		
		if(row_addr>=snake2_row[119:110] && row_addr<=snake2_row[119:110]+19 && 
			col_addr>=snake2_col[119:110] && col_addr<=snake2_col[119:110]+19)
			snake2_addr[119:110] <= (19-(row_addr - snake2_row[119:110]))*20 + (col_addr - snake2_col[119:110]);
		else	snake2_addr[119:110] <= 0;
		
		if(row_addr>=snake2_row[129:120] && row_addr<=snake2_row[129:120]+19 && 
			col_addr>=snake2_col[129:120] && col_addr<=snake2_col[129:120]+19)
			snake2_addr[129:120] <= (19-(row_addr - snake2_row[129:120]))*20 + (col_addr - snake2_col[129:120]);
		else	snake2_addr[129:120] <= 0;
		
		if(row_addr>=snake2_row[139:130] && row_addr<=snake2_row[139:130]+19 && 
			col_addr>=snake2_col[139:130] && col_addr<=snake2_col[139:130]+19)
			snake2_addr[139:130] <= (19-(row_addr - snake2_row[139:130]))*20 + (col_addr - snake2_col[139:130]);
		else	snake2_addr[139:130] <= 0;
		
		if(row_addr>=snake2_row[149:140] && row_addr<=snake2_row[149:140]+19 && 
			col_addr>=snake2_col[149:140] && col_addr<=snake2_col[149:140]+19)
			snake2_addr[149:140] <= (19-(row_addr - snake2_row[149:140]))*20 + (col_addr - snake2_col[149:140]);
		else	snake2_addr[149:140] <= 0;
		
		if(row_addr>=snake2_row[159:150] && row_addr<=snake2_row[159:150]+19 && 
			col_addr>=snake2_col[159:150] && col_addr<=snake2_col[159:150]+19)
			snake2_addr[159:150] <= (19-(row_addr - snake2_row[159:150]))*20 + (col_addr - snake2_col[159:150]);
		else	snake2_addr[159:150] <= 0;		
	end
	
	/* number 0 ~ 9 */
	// at left-up corner and right-up corner 50*50
	/*reg [10:0] num_addr;			//	2047 > 1250
	wire [119:0] number;

	number0 icnum0(.clka(vga_clk), .addra(num_addr), .douta(number[11:0]));
	number1 icnum1(.clka(vga_clk), .addra(num_addr), .douta(number[23:12]));
	number2 icnum2(.clka(vga_clk), .addra(num_addr), .douta(number[35:24]));
	number3 icnum3(.clka(vga_clk), .addra(num_addr), .douta(number[47:36]));
	number4 icnum4(.clka(vga_clk), .addra(num_addr), .douta(number[59:48]));
	number5 icnum5(.clka(vga_clk), .addra(num_addr), .douta(number[71:60]));
	number6 icnum6(.clka(vga_clk), .addra(num_addr), .douta(number[83:72]));
	number7 icnum7(.clka(vga_clk), .addra(num_addr), .douta(number[95:84]));
	number8 icnum8(.clka(vga_clk), .addra(num_addr), .douta(number[107:96]));
	number9 icnum9(.clka(vga_clk), .addra(num_addr), .douta(number[119:108]));
	
	always @ (posedge vga_clk) begin
		if(row_addr>=20 && row_addr<=69) begin
			if (col_addr>=20 && col_addr<=44)
				num_addr <= (49-(row_addr - 20))*25 + (col_addr - 20);
			else if (col_addr>=45 && col_addr<=69)
				num_addr <= (49-(row_addr - 20))*25 + (col_addr - 45);
			else if (col_addr>=570 && col_addr<=594)
				num_addr <= (49-(row_addr - 20))*25 + (col_addr - 570);
			else if (col_addr>=595 && col_addr<=619)
				num_addr <= (49-(row_addr - 20))*25 + (col_addr - 595);
			else 
				num_addr <= 0;
		end
	end	*/
	
	/** judge mode **/

	/*	
		status == 0 => in startmenu
		status == 1 => in game
		*/
	reg status;
	initial begin
		status = 0;
	end
	
	always @ (keystroke) begin
		if(keystroke[12] == 1)		//	start the game (from startmenu)
			status <= 1;
		else status <= status;
	end
	
	/** display **/	
	reg [3:0] scoreL1, scoreL2;	// 分数的十位和个位
	reg [3:0] scorer1, scorer2;

	always @ (posedge vga_clk)	begin
	
		scoreL1 = score1/10;
		scoreL2 = score1%10;
		scorer1 = score2/10;
		scorer2 = score2%10;
		
		if(game_over == 1) 	begin
			if(row_addr>=0 && row_addr<=479 && col_addr>=0 && col_addr<=639)
				vga_data <= go_data;
		end
		
		else if(status == 0)	begin
			if(row_addr>=0 && row_addr<=479 && col_addr>=0 && col_addr<=639)
				vga_data <= stm_data;
		end
		
		else if (status == 1) begin
			if(row_addr>=0 && row_addr<=479 && col_addr>=0 && col_addr<=639)
				vga_data <= bg_data;
			if (row_addr>=f1_row && row_addr<=f1_row +19 && col_addr>=f1_col && col_addr<=f1_col+19 && f1_data != 12'hFFF)
				vga_data <= f1_data;
			if (row_addr>=f2_row && row_addr<=f2_row +19 && col_addr>=f2_col && col_addr<=f2_col+19 && f2_data != 12'hFFF)
				vga_data <= f2_data;
				/*
			if(row_addr>=20 && row_addr<=69) begin
				if (col_addr>=20 && col_addr<=44) begin
					
					case(scoreL1) 
						0:	if(number[11:0] != 12'hFFF)	vga_data <= number[11:0];
						1:	if(number[23:12] != 12'hFFF) vga_data <= number[23:12];
						2:	if(number[35:24] != 12'hFFF) vga_data <= number[35:24];
						3:	if(number[47:36] != 12'hFFF) vga_data <= number[47:36];
						4:	if(number[59:48] != 12'hFFF) vga_data <= number[59:48];
						5:	if(number[71:60] != 12'hFFF) vga_data <= number[71:60];
						6:	if(number[83:72] != 12'hFFF) vga_data <= number[83:72];
						7:	if(number[95:84] != 12'hFFF) vga_data <= number[95:84];
						8:	if(number[107:96] != 12'hFFF) vga_data <= number[107:96];
						9:	if(number[119:108] != 12'hFFF) vga_data <= number[119:108];
					endcase	
				end
				else if (col_addr>=45 && col_addr<=69) begin
					
					case(scoreL2) 
						0:	if(number[11:0] != 12'hFFF)	vga_data <= number[11:0];
						1:	if(number[23:12] != 12'hFFF) vga_data <= number[23:12];
						2:	if(number[35:24] != 12'hFFF) vga_data <= number[35:24];
						3:	if(number[47:36] != 12'hFFF) vga_data <= number[47:36];
						4:	if(number[59:48] != 12'hFFF) vga_data <= number[59:48];
						5:	if(number[71:60] != 12'hFFF) vga_data <= number[71:60];
						6:	if(number[83:72] != 12'hFFF) vga_data <= number[83:72];
						7:	if(number[95:84] != 12'hFFF) vga_data <= number[95:84];
						8:	if(number[107:96] != 12'hFFF) vga_data <= number[107:96];
						9:	if(number[119:108] != 12'hFFF) vga_data <= number[119:108];
					endcase
				end
				else if (col_addr>=570 && col_addr<=594) begin
					case(scorer1) 
						0:	if(number[11:0] != 12'hFFF)	vga_data <= number[11:0];
						1:	if(number[23:12] != 12'hFFF) vga_data <= number[23:12];
						2:	if(number[35:24] != 12'hFFF) vga_data <= number[35:24];
						3:	if(number[47:36] != 12'hFFF) vga_data <= number[47:36];
						4:	if(number[59:48] != 12'hFFF) vga_data <= number[59:48];
						5:	if(number[71:60] != 12'hFFF) vga_data <= number[71:60];
						6:	if(number[83:72] != 12'hFFF) vga_data <= number[83:72];
						7:	if(number[95:84] != 12'hFFF) vga_data <= number[95:84];
						8:	if(number[107:96] != 12'hFFF) vga_data <= number[107:96];
						9:	if(number[119:108] != 12'hFFF) vga_data <= number[119:108];
					endcase
				end
				else if (col_addr>=595 && col_addr<=619) begin
					case(scorer2) 
						0:	if(number[11:0] != 12'hFFF)	vga_data <= number[11:0];
						1:	if(number[23:12] != 12'hFFF) vga_data <= number[23:12];
						2:	if(number[35:24] != 12'hFFF) vga_data <= number[35:24];
						3:	if(number[47:36] != 12'hFFF) vga_data <= number[47:36];
						4:	if(number[59:48] != 12'hFFF) vga_data <= number[59:48];
						5:	if(number[71:60] != 12'hFFF) vga_data <= number[71:60];
						6:	if(number[83:72] != 12'hFFF) vga_data <= number[83:72];
						7:	if(number[95:84] != 12'hFFF) vga_data <= number[95:84];
						8:	if(number[107:96] != 12'hFFF) vga_data <= number[107:96];
						9:	if(number[119:108] != 12'hFFF) vga_data <= number[119:108];
					endcase	
				end
			end
			*/
			// display snake1
			if(row_addr>=snake1_row[9:0] && row_addr<=snake1_row[9:0]+19 && 
		   	col_addr>=snake1_col[9:0] && col_addr<=snake1_col[9:0]+19 &&
				snake1[9:0] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[11:0];	

			if(row_addr>=snake1_row[19:10] && row_addr<=snake1_row[19:10]+19 && 
		   	col_addr>=snake1_col[19:10] && col_addr<=snake1_col[19:10]+19 &&
				snake1[19:10] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[23:12];	
					
			if(row_addr>=snake1_row[29:20] && row_addr<=snake1_row[29:20]+19 && 
		   	col_addr>=snake1_col[29:20] && col_addr<=snake1_col[29:20]+19 &&
				snake1[29:20] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[35:24];	

			if(row_addr>=snake1_row[39:30] && row_addr<=snake1_row[39:30]+19 && 
		   	col_addr>=snake1_col[39:30] && col_addr<=snake1_col[39:30]+19 &&
				snake1[39:30] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[47:36];	

			if(row_addr>=snake1_row[49:40] && row_addr<=snake1_row[49:40]+19 && 
		   	col_addr>=snake1_col[49:40] && col_addr<=snake1_col[49:40]+19 &&
				snake1[49:40] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[59:48];	

			if(row_addr>=snake1_row[59:50] && row_addr<=snake1_row[59:50]+19 && 
		   	col_addr>=snake1_col[59:50] && col_addr<=snake1_col[59:50]+19 &&
				snake1[59:50] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[71:60];	

			if(row_addr>=snake1_row[69:60] && row_addr<=snake1_row[69:60]+19 && 
		   	col_addr>=snake1_col[69:60] && col_addr<=snake1_col[69:60]+19 &&
				snake1[69:60] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[83:72];
					
			if(row_addr>=snake1_row[79:70] && row_addr<=snake1_row[79:70]+19 && 
		   	col_addr>=snake1_col[79:70] && col_addr<=snake1_col[79:70]+19 &&
				snake1[79:70] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[95:84];	
					
			if(row_addr>=snake1_row[89:80] && row_addr<=snake1_row[89:80]+19 && 
		   	col_addr>=snake1_col[89:80] && col_addr<=snake1_col[89:80]+19 &&
				snake1[89:80] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[107:96];	
					
			if(row_addr>=snake1_row[99:90] && row_addr<=snake1_row[99:90]+19 && 
		   	col_addr>=snake1_col[99:90] && col_addr<=snake1_col[99:90]+19 &&
				snake1[99:90] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[119:108];	
					
			if(row_addr>=snake1_row[109:100] && row_addr<=snake1_row[109:100]+19 && 
		   	col_addr>=snake1_col[109:100] && col_addr<=snake1_col[109:100]+19 &&
				snake1[109:100] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[131:120];	
					
			if(row_addr>=snake1_row[119:110] && row_addr<=snake1_row[119:110]+19 && 
		   	col_addr>=snake1_col[119:110] && col_addr<=snake1_col[119:110]+19 &&
				snake1[119:110] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[143:132];	
					
			if(row_addr>=snake1_row[129:120] && row_addr<=snake1_row[129:120]+19 && 
		   	col_addr>=snake1_col[129:120] && col_addr<=snake1_col[129:120]+19 &&
				snake1[129:120] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[155:144];	
					
			if(row_addr>=snake1_row[139:130] && row_addr<=snake1_row[139:130]+19 && 
		   	col_addr>=snake1_col[139:130] && col_addr<=snake1_col[139:130]+19 &&
				snake1[139:130] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[167:156];	
						
			if(row_addr>=snake1_row[149:140] && row_addr<=snake1_row[149:140]+19 && 
		   	col_addr>=snake1_col[149:140] && col_addr<=snake1_col[149:140]+19 &&
				snake1[149:140] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[179:168];
					
			if(row_addr>=snake1_row[159:150] && row_addr<=snake1_row[159:150]+19 && 
		   	col_addr>=snake1_col[159:150] && col_addr<=snake1_col[159:150]+19 &&
				snake1[159:150] != 10'b11_1111_1111)
		   		vga_data <= snake1_data[191:180];
		
			// display snake2
			if(row_addr>=snake2_row[9:0] && row_addr<=snake2_row[9:0]+19 && 
		   	col_addr>=snake2_col[9:0] && col_addr<=snake2_col[9:0]+19 &&
				snake2[9:0] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[11:0];	

			if(row_addr>=snake2_row[19:10] && row_addr<=snake2_row[19:10]+19 && 
		   	col_addr>=snake2_col[19:10] && col_addr<=snake2_col[19:10]+19 &&
				snake2[19:10] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[23:12];	
					
			if(row_addr>=snake2_row[29:20] && row_addr<=snake2_row[29:20]+19 && 
		   	col_addr>=snake2_col[29:20] && col_addr<=snake2_col[29:20]+19 &&
				snake2[29:20] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[35:24];	

			if(row_addr>=snake2_row[39:30] && row_addr<=snake2_row[39:30]+19 && 
		   	col_addr>=snake2_col[39:30] && col_addr<=snake2_col[39:30]+19 &&
				snake2[39:30] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[47:36];	

			if(row_addr>=snake2_row[49:40] && row_addr<=snake2_row[49:40]+19 && 
		   	col_addr>=snake2_col[49:40] && col_addr<=snake2_col[49:40]+19 &&
				snake2[49:40] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[59:48];	

			if(row_addr>=snake2_row[59:50] && row_addr<=snake2_row[59:50]+19 && 
		   	col_addr>=snake2_col[59:50] && col_addr<=snake2_col[59:50]+19 &&
				snake2[59:50] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[71:60];	

			if(row_addr>=snake2_row[69:60] && row_addr<=snake2_row[69:60]+19 && 
		   	col_addr>=snake2_col[69:60] && col_addr<=snake2_col[69:60]+19 &&
				snake2[69:60] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[83:72];
					
			if(row_addr>=snake2_row[79:70] && row_addr<=snake2_row[79:70]+19 && 
		   	col_addr>=snake2_col[79:70] && col_addr<=snake2_col[79:70]+19 &&
				snake2[79:70] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[95:84];	
					
			if(row_addr>=snake2_row[89:80] && row_addr<=snake2_row[89:80]+19 && 
		   	col_addr>=snake2_col[89:80] && col_addr<=snake2_col[89:80]+19 &&
				snake2[89:80] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[107:96];	
					
			if(row_addr>=snake2_row[99:90] && row_addr<=snake2_row[99:90]+19 && 
		   	col_addr>=snake2_col[99:90] && col_addr<=snake2_col[99:90]+19 &&
				snake2[99:90] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[119:108];	
					
			if(row_addr>=snake2_row[109:100] && row_addr<=snake2_row[109:100]+19 && 
		   	col_addr>=snake2_col[109:100] && col_addr<=snake2_col[109:100]+19 &&
				snake2[109:100] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[131:120];	
					
			if(row_addr>=snake2_row[119:110] && row_addr<=snake2_row[119:110]+19 && 
		   	col_addr>=snake2_col[119:110] && col_addr<=snake2_col[119:110]+19 &&
				snake2[119:110] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[143:132];	
					
			if(row_addr>=snake2_row[129:120] && row_addr<=snake2_row[129:120]+19 && 
		   	col_addr>=snake2_col[129:120] && col_addr<=snake2_col[129:120]+19 &&
				snake2[129:120] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[155:144];	
					
			if(row_addr>=snake2_row[139:130] && row_addr<=snake2_row[139:130]+19 && 
		   	col_addr>=snake2_col[139:130] && col_addr<=snake2_col[139:130]+19 &&
				snake2[139:130] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[167:156];	
						
			if(row_addr>=snake2_row[149:140] && row_addr<=snake2_row[149:140]+19 && 
		   	col_addr>=snake2_col[149:140] && col_addr<=snake2_col[149:140]+19 &&
				snake2[149:140] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[179:168];
					
			if(row_addr>=snake2_row[159:150] && row_addr<=snake2_row[159:150]+19 && 
		   	col_addr>=snake2_col[159:150] && col_addr<=snake2_col[159:150]+19 &&
				snake2[159:150] != 10'b11_1111_1111)
		   		vga_data <= snake2_data[191:180];
					
		end
	end
	
endmodule
