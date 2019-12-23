module core (input clk,
             input [11:0] keystroke,
             output reg [15:0][9:0] snake1,
             output reg [15:0][9:0] snake2,
             output reg [6:0] score1,
             output reg [6:0] score2,
             output reg [9:0] food1,
             output reg [9:0] food2);
    //  output reg snake1 [89:0][119:0],
    //  output reg snake2 [89:0][119:0],
    /**
     * @param keystroke
     * the first four[3:0] bit of key stroke will control the movement of snake1
     * when your bit is set, I'll take it that the key is pressed
     * [0] left
     * [1] right
     * [2] up
     * [3] down
     * the four bit[7:4] following will control the movement of snake2
     * bit[8] will clear current game, can be conprehended as a reset key(like when your snake collapes or dies), however it will clear current game even if you're still   playing
     * bit[9] will save current game, like a pause key, pressing it again will resume the game
     * bit[10] will speed up the game(harder to play)
     * bit[11] will slow down the game(easier to play)
     * default speed is 1HZ
     * other bits are to be defined
     *
     * @param clk
     * system clock of 50MHZ
     *
     * @param snake1
     * @param snake2
     * currently computing position as a 90*120 net
     * easy to display on a 4:3 screen
     * I wrote nodule num2pos.v to compute the current position to a net of a 16-bit number
     * thought I'd use it in core, but I didn't
     * you may use it to display the snake on screen
     *
     * @param score1
     * @param score1
     * the score of your little snake
     * which can be comprehended as the length of your snake
     * the default value is 5 for both snakes
     *
     * @param food1
     * @param food2
     * the position of the two eatable food
     * it is alright to eat the other's food
     */
    
    /**the number representation of our small snake is in the two variable snake1 and snake2
     * the longest snake shouldn't be longer than 65535
     * when a snake body part is to be light up
     * I'll set the number of current position
     */
    wire [1:0] d1;
    wire [1:0] d2;
    wire [15:0][9:0] snake1_wire;
    wire [15:0][9:0] snake2_wire;
    wire clk1;
    wire clk2;
    wire should_stop1;
    wire should_stop1_1;
    wire should_stop1_2;
    assign should_stop1 = should_stop1_1 || should_stop1_2;
    wire should_stop2;
    wire should_stop2_1;
    wire should_stop2_2;
    assign should_stop2 = should_stop2_1 || should_stop2_2;
    wire clk_game;
    assign clk1 = should_stop1 ? 1'b0 : clk_game;
    assign clk2 = should_stop2 ? 1'b0 : clk_game;
    // clk_rate is to determine the game running clk
    // 00 fastest: 4HZ
    // 01 faster: 2HZ
    // 10 normal: 1HZ
    // 11 slower: 0.5HZ
    reg [1:0] clk_rate;
    always@(posedge clk) begin
        if(keystroke[10]) clk_rate <= clk_rate + 1;
        if(keystroke[11]) clk_rate <= clk_rate - 1;
    end
    always @(posedge clk) begin
        snake1 <= snake1_wire;
        snake2 <= snake2_wire;
    end
    initial begin
        clk_rate = 0;
        // random position for food at initialization
        food1 = 10'b1010101010;
        food2 = 10'b0101010101;
        // length of 5, score of zero
        score1 = 1;
        score2 = 1;
    end
    clk_div u_clk_div (
    .clk         (clk),
    .clk_rate    (clk_rate),
    .clk_game    (clk_game)
    );
    collision_check u_collision_check (
    .snake1       (snake1),
    .snake2       (snake2),
    .clk             (clk),
    .should_stop1    (should_stop1_1),
    .should_stop2    (should_stop2_1)
    );
    key2di u_key2di_1 (
    .keys    (keystroke[3:0]),
    .di      (d1)
    );
    key2di u_key2di_2 (
    .keys    (keystroke[7:4]),
    .di      (d2)
    );
    moving_snake #(.index(0)) u_moving_snake_1
    (
    .clk             (clk1),
    .di              (d1),
    .prev_pos_num    (snake1),
    .next_pos_num    (snake1_wire),
    .should_stop     (should_stop1_2),
    .len             (score1)
    );
    moving_snake #(.index(1)) u_moving_snake_2
    (
    .clk             (clk2),
    .di              (d2),
    .prev_pos_num    (snake2),
    .next_pos_num    (snake2_wire),
    .should_stop     (should_stop2_2),
    .len             (score2)
    );
    
endmodule
