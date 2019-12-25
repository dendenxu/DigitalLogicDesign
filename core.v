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
     * bit[9] will save current game, like a pause key, pressing it again should resume the game(and this logic should be implemented by yueyue)
     * I will only save or pause the game base on the status of this bit, high for pausing, and low for resuming
     * bit[10] will speed up the game(harder to play)
     * this bit shouldn't be set to high for too long
     * it's the keystroke implementer's duty to make sure that this bit is set to high for smaller than one clk period(since I'll check for speed update on every clk(50MHZ))
     * bit[11] will slow down the game(easier to play)
     * same restriction for as bit[10]
     * default speed is 1HZ
     * other bits are to be defined
     *
     * @param clk_raw
     * system clock of 50MHZ
     *
     * @param snake1
     * @param snake2
     * currently computing position as a 24*32 net
     * easy to display on a 4:3 screen
     * every snake part is a 10bit integer
     * snake_part%32 should produce its x-value
     * snake_part/32 should produce its y-value
     * currently the longest snake is 16 part(chosen this number for resourse purpose(poor board))
     * you can render the snake according to its current score, which is its length, discarding the rest of the snake array
     * even though I'll the the rest of the snake to high, representing there inexistence
     *
     * @param score1
     * @param score1
     * the score of your little snake
     * which can be comprehended as the length of your snake
     * the default value is 1 for both snakes
     *
     * @param food1
     * @param food2
     * the position of the two eatable food
     * it is alright to eat the other's food
     */
module core (input clk_raw,
             input [11:0] keystroke,
             output reg [159:0] snake1,
             output reg [159:0] snake2,
             output reg [4:0] score1,
             output reg [4:0] score2,
             output reg [9:0] food1,
             output reg [9:0] food2);

    // TODO add the reset function to our input and output
    // TODO add food and score accumulation for our game
    // Thinking about implementing the seconde one first since when you hit reset you should be able to reset everything including the scores and food position and the length/position of our two small snakes
    wire clk;
    assign clk = keystroke[9]?0:clk_raw;
    wire [1:0] d1;
    wire [1:0] d2;
    wire [159:0] snake1_wire;
    wire [159:0] snake2_wire;
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
    reg changed;
    always @(posedge clk) begin
        if(clk_game&&~changed) begin
            snake1 <= snake1_wire;
            snake2 <= snake2_wire;
            changed <= 1;
        end
        else if (~clk_game) begin
            changed <= 0;
        end
    end
    initial begin
        clk_rate = 0;
        // random position for food at initialization
        food1 = 10'b1010101010;
        food2 = 10'b0101010101;
        // length of 5, score of zero
        score1 = 2;
        score2 = 2;
        snake1 = 160'b_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_00_0000_0001_00_0000_0010;
        snake2 = 160'b_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_00_0001_0011_00_0001_0100;
    end
    // assign should_stop1_1 = 0;
    // assign should_stop2_1 = 0;
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
