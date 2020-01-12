
module TOP#(max_len = 31,
            num_len = 10,
            max_len_bit_len = 5,
            width = 32,
            height = 24
    )(
    input clk,
    input ps2_clk,
    input ps2_data,
    output wire hs, vs,
    output wire [3:0] r,g,b);

    wire [max_len*num_len-1:0] snake1, snake2;
    wire [max_len_bit_len-1:0] score1, score2;
    wire [num_len-1:0] food1, food2;
    wire game_over;
    wire [12:0] keystroke;
    wire [9:0] data;
    reg [31:0] clkdiv;
    always @ (posedge clk) begin
        clkdiv<= clkdiv+1'b1;
    end
    core #(.max_len(max_len),.num_len(num_len),.max_len_bit_len(max_len_bit_len),.width(width),.height(height)) c0(.clk_raw(clk), .keystroke(keystroke[12:0]), .snake1(snake1), .snake2(snake2), .food1(food1), .food2(food2), .score1(score1), .score2(score2), .game_over(game_over));
    vga_main#(.max_len(max_len),.num_len(num_len),.max_len_bit_len(max_len_bit_len),.width(width),.height(height)) v0(.snake1(snake1), .snake2(snake2), .score1(score1), .score2(score2), .food1(food1), .food2(food2), .game_over(game_over), .keystroke(keystroke[12:0]), .vga_clk(clkdiv[1]), .vga_rst(1'b1), .hs(hs), .vs(vs), .r(r), .g(g), .b(b));
    ps2control m1(.clk(clk), .ps2_clk(ps2_clk), .ps2_data(ps2_data), .rst(1), .data(data));
    getinput m2(.clk(clk), .data(data), .clk_valid(clk), .key_stroke(keystroke[12:0]));
    
endmodule