/* verilator lint_off UNOPTFLAT */
/**
 * INTERFACE DEFINITION
 * if you just want to instantiate this module, you don't need to read the source
 * I'll put necessary information here for your reference
 * @param keystroke
 * the first four[3:0] bit of key stroke will control the movement of snake1
 * when your bit is set, I'll take it that the key is pressed
 * [0] left
 * [1] right
 * [2] up
 * [3] down
 * the four bit[7:4] following will control the movement of snake2
 * bit[8] will clear current game, can be conprehended as a reset key(like when your snake collapes or dies), however it will clear current game even if you'r  still   playing
 * bit[9] will save current game, like a pause key, pressing it again should resume the game(and this logic should be implemented by yueyue)
 * I will only save or pause the game base on the status of this bit, high for pausing, and low for resuming
 * bit[10] will speed up the game(harder to play)
 * this bit shouldn't be set to high for too long
 * it's the keystroke implementer's duty to make sure that this bit is set to high for smaller than one clk period(since I'll check for speed update on every c  (50MHZ))
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
 *
 *
 * @real_parameter max_len max length of a snake
 * @real_parameter num_len number of bits used to represent a postion as a number (already illustrated above)
 * @real_parameter max_len_bit_len number of bits used to represent the max_len (used by some counting register to save register bits)
 * @real_parameter width the width of the screen (unit: snake part)
 * @real_parameter width the height of the screen (unit: snake part)
 *
 */

// TODO add the reset function to our input and output
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
    
    // game is over when both snakes should stop (their game clk are paused too)
    assign game_over = should_stop1&&should_stop2;
    // this is actually a controlled clock (when you hit pause key, things stop because this clk is stopped)
    wire clk;
    assign clk = keystroke[9]?0:clk_raw;
    // convert keyboard input to 2-bit binary value, like a encoder
    // and this is where the converted value is stored
    wire [1:0] d1;
    wire [1:0] d2;
    // the reason why we need wire is that reg cannot be connected to a modules output
    // and sometimes we need the previous value as an input for processing
    wire [max_len*num_len-1:0] snake1_wire;
    wire [max_len*num_len-1:0] snake2_wire;
    wire [max_len_bit_len-1:0] score1_wire;
    wire [max_len_bit_len-1:0] score2_wire;
    wire [num_len-1:0] food1_wire;
    wire [num_len-1:0] food2_wire;
    // controls the clk for individual snakes
    // so when one snakes is dead, the other can move on without distraction
    wire clk1;
    wire clk2;
    assign clk1 = should_stop1 ? 1'b0 : clk_game;
    assign clk2 = should_stop2 ? 1'b0 : clk_game;
    // used in combination to stop the snake
    // the reason why we need two stop signals is that it can be driven by both collision check and moving snake module
    reg should_stop1;
    wire should_stop1_1;
    wire should_stop1_2;
    always@(posedge clk) should_stop1 <= (keystroke[8])?init_should_stop1:(should_stop1_1 || should_stop1_2);
    reg should_stop2;
    wire should_stop2_1;
    wire should_stop2_2;
    always@(posedge clk) should_stop2 <= (keystroke[8])?init_should_stop2:(should_stop2_1 || should_stop2_2);
    // clk_game is the divided clk(very slow) and is human processable
    // is the output of clk_div module, can shift speed according to current clk shift ratio
    // however this will be a pain in simulation since the computer needs to compute too much things that I don't even care
    wire clk_game;
    // clk_rate is to determine the game running clk
    // 00 fastest: 4HZ
    // 01 faster: 2HZ
    // 10 normal: 1HZ
    // 11 slower: 0.5HZ
    reg [1:0] clk_rate;
    always@(posedge clk) begin
        if (keystroke[10]) clk_rate      <= (keystroke[8])?init_clk_rate:(clk_rate + 1);
        else if (keystroke[11]) clk_rate <= (keystroke[8])?init_clk_rate:(clk_rate - 1);
        else clk_rate                    <= (keystroke[8])?init_clk_rate:(clk_rate);
    end
    
    // the output of moving snake and score/food is not quite simutaneous
    // so I put there update procedure in different always blocks
    reg ok;
    always @(posedge clk) begin
        if (clk_game&&~ok) begin
            score1 <= (keystroke[8])?init_score1:score1_wire;
            score2 <= (keystroke[8])?init_score2:score2_wire;
            food1  <= (keystroke[8])?init_food1:food1_wire;
            food2  <= (keystroke[8])?init_food2:food2_wire;
            ok     <= (keystroke[8])?init_ok:1;
        end
        else if (~clk_game) ok <= (keystroke[8])?init_ok:0;
        else begin
            score1 <= (keystroke[8])?init_score1:score1;
            score2 <= (keystroke[8])?init_score2:score2;
            food1  <= (keystroke[8])?init_food1:food1;
            food2  <= (keystroke[8])?init_food2:food2;
            ok     <= (keystroke[8])?init_ok:ok;
        end
    end
    reg changed;
    always @(posedge clk) begin
        if (clk_game&&~changed) begin
            snake1  <= (keystroke[8])?init_snake1:snake1_wire;
            snake2  <= (keystroke[8])?init_snake2:snake2_wire;
            changed <= (keystroke[8])?init_changed:1;
        end
        else if (~clk_game) changed <= (keystroke[8])?init_changed:0;
        else begin
            snake1  <= (keystroke[8])?init_snake1:snake1;
            snake2  <= (keystroke[8])?init_snake2:snake2;
            changed <= (keystroke[8])?init_changed:changed;
        end
    end
    
    // do remember to initialize value
    // but I assume even if you've forgotten to do this, your code should work well if there's nothing wrong
    // in simulation you can easily identify bad thing with red color (ISim put x as red)
    // but I hate to see too many red lines
    // INITIAL VALUES ARE DEFINED HERE (USED IN INITIAL STATEMENT AND RESET)
    localparam init_should_stop1 = 0;
    localparam init_should_stop2 = 0;
    localparam init_changed      = 0;
    localparam init_ok           = 0;
    localparam init_clk_rate     = 0;
    localparam init_food1        = 10'b00_0000_0011;
    localparam init_food2        = 10'b00_1010_0011;
    localparam init_score1       = 2;
    localparam init_score2       = 2;
    localparam init_snake1       = {{(max_len-init_score1)*num_len{1'b1}},20'b00_0000_0001_00_0000_0010};
    localparam init_snake2       = {{(max_len-init_score2)*num_len{1'b1}},20'b00_0010_0100_00_0010_0011};
    initial begin
        should_stop1 = init_should_stop1;
        should_stop2 = init_should_stop2;
        changed      = init_changed;
        ok           = init_ok;
        clk_rate     = init_clk_rate;
        // random position for food at initialization
        food1 = init_food1;
        food2 = init_food2;
        // length of 5, score of zero
        score1 = init_score1;
        score2 = init_score2;
        snake1 = init_snake1;
        snake2 = init_snake2;
    end
    
    food_check #(
    .max_len(max_len),
    .num_len(num_len),
    .max_len_bit_len(max_len_bit_len),
    .width(width),
    .height(height))
    u_food_check_1(
    .clk_raw    (clk),
    .clk        (clk_game),
    .snake1     (snake1),
    .snake2     (snake2),
    .food2      (food2),
    .snake_head (snake1[num_len-1:0]),
    .prev_food  (food1),
    .next_food  (food1_wire),
    .prev_score (score1),
    .next_score (score1_wire)
    );
    
    food_check #(
    .max_len(max_len),
    .num_len(num_len),
    .max_len_bit_len(max_len_bit_len),
    .width(width),
    .height(height))
    u_food_check_2(
    .clk_raw    (clk),
    .clk        (clk_game),
    .snake1     (snake1),
    .snake2     (snake2),
    .food2      (food1),
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
    collision_check #(
    .max_len(max_len),
    .num_len(num_len),
    .max_len_bit_len(max_len_bit_len))
    u_collision_check (
    .snake1          (snake1),
    .snake2          (snake2),
    .len1            (score1),
    .len2            (score2),
    .clk             (clk),
    .rst             (keystroke[8]),
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
    moving_snake #(
    .max_len(max_len),
    .num_len(num_len),
    .max_len_bit_len(max_len_bit_len),
    .width(width),
    .height(height))
    u_moving_snake_1
    (
    .clk             (clk1),
    .rst             (keystroke[8]),
    .di              (d1),
    .prev_pos_num    ((keystroke[8])?init_snake1:snake1),
    .next_pos_num    (snake1_wire),
    .should_stop     (should_stop1_2),
    .len             (score1)
    );
    moving_snake #(
    .max_len(max_len),
    .num_len(num_len),
    .max_len_bit_len(max_len_bit_len),
    .width(width),
    .height(height))
    u_moving_snake_2
    (
    .clk             (clk2),
    .rst             (keystroke[8]),
    .di              (d2),
    .prev_pos_num    ((keystroke[8])?init_snake2:snake2),
    .next_pos_num    (snake2_wire),
    .should_stop     (should_stop2_2),
    .len             (score2)
    );
    
endmodule
