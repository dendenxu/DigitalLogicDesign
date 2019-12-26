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
     * the default value is 2 for both snakes
     *
     * @param food1
     * @param food2
     * the position of the two eatable food
     * it is alright to eat the other's food
     * nonono it's not alright
     * stay to your own food...
     * if it's allowed to eat one another's food, when two snakes are eating the same food, the result can be undefined
     * 
     * 
     * @param game_over
     * whether both snakes are dead
     * this variable changes to high when the should stop signal of both snakes are set
     * and drops immediately when the previous condition changes
     * if you want to do something with this value, be sure to use it in combination with keystroke
     */
module core #(max_len = 16,
              num_len = 10,
              max_len_bit_len = 4,
              width = 32,
              height = 24)
             (input clk_raw,
              input [11:0] keystroke,
              output reg [max_len*num_len-1:0] snake1,
              output reg [max_len*num_len-1:0] snake2,
              output reg [max_len_bit_len-1:0] score1,
              output reg [max_len_bit_len-1:0] score2,
              output reg [num_len-1:0] food1,
              output reg [num_len-1:0] food2,
              output game_over);

    // TODO add the reset function to our input and output
    // TODO add food and score accumulation for our game
    // Thinking about implementing the second one first since when you hit reset you should be able to reset everything including the scores and food position and the length/position of our two small snakes
    
    assign game_over = should_stop1&&should_stop2;
    wire clk;
    assign clk = keystroke[9]?0:clk_raw;
    wire [1:0] d1;
    wire [1:0] d2;
    wire [max_len*num_len-1:0] snake1_wire;
    wire [max_len*num_len-1:0] snake2_wire;
    wire [max_len_bit_len-1:0] score1_wire;
    wire [max_len_bit_len-1:0] score2_wire;
    wire [num_len-1:0] food1_wire;
    wire [num_len-1:0] food2_wire;
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
    reg ok;
    always @(posedge clk) begin
        if(clk_game&&~ok) begin
            score1 <= score1_wire;
            score2 <= score2_wire;
            food1 <= food1_wire;
            food2 <= food2_wire;
            ok <= 1;
        end else if(~clk_game) ok <= 0;
    end
    reg changed;
    always @(posedge clk) begin
        if(clk_game&&~changed) begin
            snake1 <= snake1_wire;
            snake2 <= snake2_wire;
            changed <= 1;
        end
        else if (~clk_game) changed <= 0;
    end
    initial begin
        changed = 0;
        ok = 0;
        clk_rate = 0;
        // random position for food at initialization
        food1 = 10'b00_0000_0011;
        food2 = 10'b00_1010_0011;
        // length of 5, score of zero
        score1 = 2;
        score2 = 2;
        snake1 = 160'b_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_00_0000_0001_00_0000_0010;
        snake2 = 160'b_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_00_0010_0100_00_0010_0011;
    end

    food_check u_food_check_1(
    .clk        (clk),
    .snake_head (snake1[num_len-1:0]),
    .prev_food  (food1),
    .next_food  (food1_wire),
    .prev_score (score1),
    .next_score (score1_wire)
    );

    food_check u_food_check_2(
    .clk        (clk),
    .snake_head (snake2[num_len-1:0]),
    .prev_food  (food2),
    .next_food  (food2_wire),
    .prev_score (score2),
    .next_score (score2_wire)
    );
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
    moving_snake u_moving_snake_1
    (
    .clk             (clk1),
    .clk_raw         (clk),
    .di              (d1),
    .prev_pos_num    (snake1),
    .next_pos_num    (snake1_wire),
    .should_stop     (should_stop1_2),
    .len             (score1)
    );
    moving_snake u_moving_snake_2
    (
    .clk             (clk2),
    .clk_raw         (clk),
    .di              (d2),
    .prev_pos_num    (snake2),
    .next_pos_num    (snake2_wire),
    .should_stop     (should_stop2_2),
    .len             (score2)
    );
    
endmodule
