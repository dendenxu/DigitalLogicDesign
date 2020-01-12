/* verilator lint_off STMTDLY*/
module core_sim;

    // Inputs
    reg clk;
    reg [12:0] keystroke;

    // Instantiate the Unit Under Test (UUT)
    core #(.max_len(15),
    .max_len_bit_len(4),
    .clk_div_num(1250),
// These two lines are used to verify whether the snake will stop if it collides with its body
    .init_score1(5),
    .init_snake1({{(16-5)*10{1'b1}},50'b0100001100_0100001101_0100001110_0100101110_0100101101})
// These lines are used to verify whether the snake will stop if it collides with another snake
    // .init_score1(2),
    // .init_score2(2),
    // .init_snake1({{(16-2)*10{1'b1}},20'b0000000000_0000000001}),
    // .init_snake2({{(16-2)*10{1'b1}},20'b0001000000_0000100001})
// These lines are used to verify food_check
    // .init_score1(2),
    // .init_score2(2),
    // .init_food1(10'b0000001000),
    // .init_food2(10'b0000110001),
    // .init_snake1({{(16-2)*10{1'b1}},20'b0000000000_0000000001}),
    // .init_snake2({{(16-2)*10{1'b1}},20'b0001000000_0000100001})
    ) uut (
        .clk_raw(clk), 
        .keystroke(keystroke)
    );

    initial begin
    // These two lines are used to verify whether the snake will stop if it collides with its body
        keystroke = 13'b10000_1000_0100;
        #10000000;
        keystroke[8] = 1;#50 keystroke[8] = 0;
    // These lines are used to verify whether the snake will stop if it collides with another snake
        // keystroke = 13'b10000_0100_0010;
        // #10000000;
        // keystroke[8] = 1;#50 keystroke[8] = 0;
    // These lines are used to verify food_check
        // keystroke = 13'b10000_0010_0010;
        // #10000000; keystroke[8] = 1;#50 keystroke[8] = 0;
        // #10000000; keystroke[8] = 1;#50 keystroke[8] = 0;
        // #10000000; keystroke[8] = 1;#50 keystroke[8] = 0;
    // These line are general test cases    
        // keystroke = 13'b10000_1000_0010;
        // #1000000 keystroke = 13'b10000_0010_0100;
        // #1000000 keystroke[9] = 1;
        // #1000000 keystroke = 13'b10000_1000_1000;
        // #1000000;
        // keystroke[8] = 1;#50 keystroke[8] = 0;
        // #1000000;
        // keystroke[8] = 1;#50 keystroke[8] = 0;
        // #4000000 keystroke = 13'b10000_1000_0010;
        // keystroke[8] = 1;#50 keystroke[8] = 0;
        // #1000000 keystroke = 13'b10000_0010_0010;
        // #10000000;
        // keystroke[8] = 1;#50 keystroke[8] = 0;
        // keystroke = 13'b10000_1000_0010;
        // #1000000 keystroke = 13'b10000_0010_0100;
    end
    initial begin
        clk = 0;
        forever #5 clk =~clk;
    end
      
endmodule