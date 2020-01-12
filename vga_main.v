`timescale 1ns / 1ps

module vga_main #(max_len = 31,
              num_len = 10,
              max_len_bit_len = 5,
              width = 32,
              height = 24) (
    
        // from core.v
        
        input [max_len*num_len-1:0] snake1,
        input [max_len*num_len-1:0] snake2,
        input [max_len_bit_len-1:0] score1,
        input [max_len_bit_len-1:0] score2,
        input [num_len-1:0] food1,
        input [num_len-1:0] food2,	
        
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
        /**
    * ip core parameters:
    * 	.addra		=>  input where we want to get the data
    *	.douta		=>  output .addra's data
    *	.clka		=>  clock
    *
    * ip core instances:
    *	StartMenu => ics --- startmenu img  640*480		
    *  GameOver	 => icgo --- gameover		640*480	
    *	Background=> icb --- background 640*480
    *	s1b => ics1b --- basic block of snake1 20*20
    *	s1h => ics1h --- basic block of snake1's head 20*20
    *	s2b => ics2b --- basic block of snake2 20*20
    *	s2h => ics2h --- basic block of snake2's head 20*20
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
    
    
    /* gameover */
     /*
    reg [19:0] go_addr;
    wire [11:0] go_data;
    
    GameOver icgo(.clka(vga_clk), .addra(go_addr), .douta(go_data));
    
    always @ (posedge vga_clk) begin
        go_addr <= (row_addr>=0 && row_addr<=479 && col_addr>=0 && col_addr<=639)?((479-row_addr)*640+col_addr):0;
    end*/
    
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
    genvar i;
    reg [max_len*num_len-1:0] snake1_addr;
    wire [max_len*(12)-1:0] snake1_data;
    reg [max_len*num_len-1:0] snake1_row;
    reg [max_len*num_len-1:0] snake1_col;
    s1h ics1head(.clka(vga_clk), .addra(snake1_addr[9:0]), .douta(snake1_data[11:0]));
    
    reg [max_len*num_len-1:0] snake2_addr;
    wire [max_len*(12)-1:0] snake2_data;
    reg [max_len*num_len-1:0] snake2_row;
    reg [max_len*num_len-1:0] snake2_col;	
    s2h ics2head(.clka(vga_clk), .addra(snake2_addr[9:0]), .douta(snake2_data[11:0]));

    generate
    for(i=0;i<max_len-1;i=i+1) begin: snake_body
        s1b ics1body(.clka(vga_clk), .addra(snake1_addr[(i+1)*num_len+:num_len]), .douta(snake1_data[(i+1)*12+:12]));
        s2b ics2body(.clka(vga_clk), .addra(snake2_addr[(i+1)*num_len+:num_len]), .douta(snake2_data[(i+1)*12+:12]));
    end
    endgenerate

    reg [31:0] j;
    
    /** display **/	
    always @(posedge vga_clk) begin
     
        if (game_over == 1) begin
            if (row_addr>=0 && row_addr<=479 && col_addr>=0 && col_addr<=639) vga_data<=stm_data;
        end
        else if (keystroke[12] == 0) begin
            if (row_addr>=0 && row_addr<=479 && col_addr>=0 && col_addr<=639) vga_data <= stm_data;
        end else begin
            if (row_addr>=0 && row_addr<=479 && col_addr>=0 && col_addr<=639) vga_data <= bg_data;
            if (row_addr>=f1_row && row_addr<=f1_row + 19 && col_addr>=f1_col && col_addr<=f1_col + 19 && f1_data != 12'hFFF) vga_data <= f1_data;
            if (row_addr>=f2_row && row_addr<=f2_row + 19 && col_addr>=f2_col && col_addr<=f2_col + 19 && f2_data != 12'hFFF) vga_data <= f2_data;
            for(j=0;j<max_len;j=j+1) begin: snake_convert
                if(snake1[j*num_len+:num_len] != 10'b11_1111_1111) begin 
                    snake1_row[j*num_len+:num_len] <= snake1[j*num_len+:num_len]/width*20;
                    snake1_col[j*num_len+:num_len] <= (snake1[j*num_len+:num_len]%width)*20;
                end
                if(snake2[j*num_len+:num_len] != 10'b11_1111_1111) begin 
                    snake2_row[j*num_len+:num_len] <= snake2[j*num_len+:num_len]/width*20;
                    snake2_col[j*num_len+:num_len] <= (snake2[j*num_len+:num_len]%width)*20;
                end
                if(row_addr>=snake1_row[j*num_len+:num_len] && row_addr<=snake1_row[j*num_len+:num_len]+19 && col_addr>=snake1_col[j*num_len+:num_len] && col_addr<=snake1_col[j*num_len+:num_len]+19)
                    snake1_addr[j*num_len+:num_len] <= (19-(row_addr - snake1_row[j*num_len+:num_len]))*20 + (col_addr - snake1_col[j*num_len+:num_len]);
                else snake1_addr[j*num_len+:num_len] <= 0;
                if(row_addr>=snake2_row[j*num_len+:num_len] && row_addr<=snake2_row[j*num_len+:num_len]+19 && col_addr>=snake2_col[j*num_len+:num_len] && col_addr<=snake2_col[j*num_len+:num_len]+19)
                    snake2_addr[j*num_len+:num_len] <= (19-(row_addr - snake2_row[j*num_len+:num_len]))*20 + (col_addr - snake2_col[j*num_len+:num_len]);
                else snake2_addr[j*num_len+:num_len] <= 0;
                if(!game_over&&keystroke[12]) begin
                    if(row_addr>=snake1_row[j*num_len+:num_len] && row_addr<=snake1_row[j*num_len+:num_len]+19 && col_addr>=snake1_col[j*num_len+:num_len] && col_addr<=snake1_col[j*num_len+:num_len]+19 && score1 >= j+1) vga_data <= snake1_data[j*12+:12];
                    if(row_addr>=snake2_row[j*num_len+:num_len] && row_addr<=snake2_row[j*num_len+:num_len]+19 && col_addr>=snake2_col[j*num_len+:num_len] && col_addr<=snake2_col[j*num_len+:num_len]+19 && score2 >= j+1) vga_data <= snake2_data[j*12+:12];
                end
            end
        end
    end
    
endmodule
