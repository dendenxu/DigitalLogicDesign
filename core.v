/* verilator lint_off UNOPTFLAT */
/* THE INTERFACE OF THIS FILE IS PUT IN INTERFACE_CORE.TXT UNDER THE SAME DIRECTORY */
module core #(max_len = 31,
              num_len = 10,
              max_len_bit_len = 5,
              width = 32,
              height = 24,
              clk_div_num = 1250_0000,
              // do remember to initialize value
              // but I assume even if you've forgotten to do this, your code should work well if there's nothing wrong
              // in simulation you can easily identify bad thing with red color (ISim put x as red)
              // but I hate to see too many red lines
              // INITIAL VALUES ARE DEFINED HERE (USED IN INITIAL STATEMENT AND RESET)
              init_should_stop1 = 0,
              init_should_stop2 = 0,
              init_changed      = 0,
              init_ok           = 0,
              init_clk_rate     = 2'b10,
              init_food1        = 10'b00_0000_0011,
              init_food2        = 10'b00_1010_0011,
              init_score1       = 2,
              init_score2       = 2,
              init_snake1       = {{(max_len-init_score1)*num_len{1'b1}},20'b00_1000_1111_00_1000_1110},
              init_snake2       = {{(max_len-init_score2)*num_len{1'b1}},20'b01_1100_1111_01_1110_1111})
             (input clk_raw,
              input [12:0] keystroke,
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
    assign clk = (keystroke[9]|(~keystroke[12]))?0:clk_raw;
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
    reg should_stop2;
    wire should_stop2_1;
    wire should_stop2_2;
    // clk_game is the divided clk(very slow) and is human processable
    // is the output of clk_div module, can shift speed according to current clk shift ratio
    // however this will be a pain in simulation since the computer needs to compute too much things that I don't even care
    wire clk_game;
    // clk_rate is to determine the game running clk
    // 00 fastest: 4HZ
    // 01 faster: 2HZ
    // 10 normal: 1HZ
    // 11 slower: 0.5HZ
    // the output of moving snake and score/food is not quite simutaneous
    // so I put there update procedure in different always blocks
    reg ok;
    reg changed;
    reg [1:0] clk_rate;
    always@(posedge clk, posedge keystroke[8]) begin
        if(keystroke[8]) begin
            should_stop1 <= init_should_stop1;
            should_stop2 <= init_should_stop2;
            changed      <= init_changed;
            ok           <= init_ok;
            clk_rate     <= init_clk_rate;
            // random position for food at initialization
            food1 <= init_food1;
            food2 <= init_food2;
            // length of 0, score of zero
            score1 <= init_score1;
            score2 <= init_score2;
            snake1 <= init_snake1;
            snake2 <= init_snake2;
        end else begin
            should_stop1 <= (should_stop1_1 || should_stop1_2);
            should_stop2 <= (should_stop2_1 || should_stop2_2);
            if (keystroke[10]) clk_rate      <= (clk_rate + 1);
            else if (keystroke[11]) clk_rate <= (clk_rate - 1);
            else clk_rate                    <= (clk_rate);
            if (clk_game&&~ok) begin
                score1 <= score1_wire;
                score2 <= score2_wire;
                food1  <= food1_wire;
                food2  <= food2_wire;
                ok     <= 1;
            end
            else if (~clk_game) ok <= 0;
            else begin
                score1 <= score1;
                score2 <= score2;
                food1  <= food1;
                food2  <= food2;
                ok     <= ok;
            end
            if (clk_game&&~changed) begin
                snake1  <= snake1_wire;
                snake2  <= snake2_wire;
                changed <= 1;
            end
            else if (~clk_game) changed <= 0;
            else begin
                snake1  <= snake1;
                snake2  <= snake2;
                changed <= changed;
            end
        end
    end
    initial begin
        should_stop1 = init_should_stop1;
        should_stop2 = init_should_stop2;
        changed      = init_changed;
        ok           = init_ok;
        clk_rate     = init_clk_rate;
        // random position for food at initialization
        food1 = init_food1;
        food2 = init_food2;
        // length of 0, score of zero
        score1 = init_score1;
        score2 = init_score2;
        snake1 = init_snake1;
        snake2 = init_snake2;
    end
    
    food_check #(.max_len(max_len),.num_len(num_len),.max_len_bit_len(max_len_bit_len),.width(width),.height(height))u_food_check_1(.clk_raw(clk),.clk(clk_game),.snake1(snake1),.snake2(snake2),.food2(food2),.snake_head(snake1[num_len-1:0]),.prev_food(food1),.next_food(food1_wire),.prev_score(score1),.next_score(score1_wire));
    food_check #(.max_len(max_len),.num_len(num_len),.max_len_bit_len(max_len_bit_len),.width(width),.height(height))u_food_check_2(.clk_raw(clk),.clk(clk_game),.snake1(snake1),.snake2(snake2),.food2(food1),.snake_head (snake2[num_len-1:0]),.prev_food(food2),.next_food(food2_wire),.prev_score(score2),.next_score(score2_wire));
    clk_div #(.clk_div_num(clk_div_num))u_clk_div (.clk(clk),.rst(keystroke[8]),.clk_rate(clk_rate),.clk_game(clk_game));
    collision_check #(.max_len(max_len),.num_len(num_len),.max_len_bit_len(max_len_bit_len))u_collision_check (.snake1(snake1),.snake2(snake2),.len1(score1),.len2(score2),.clk(clk),.rst(keystroke[8]),.should_stop1(should_stop1_1),.should_stop2(should_stop2_1));
    key2di u_key2di_1 (.keys(keystroke[3:0]),.di(d1));
    key2di u_key2di_2 (.keys(keystroke[7:4]),.di(d2));
    moving_snake #(.max_len(max_len),.num_len(num_len),.max_len_bit_len(max_len_bit_len),.width(width),.height(height))u_moving_snake_1(.stoped(should_stop1),.clk(clk1),.rst(keystroke[8]),.di(d1),.prev_pos_num(snake1),.next_pos_num(snake1_wire),.should_stop(should_stop1_2),.len(score1));
    moving_snake #(.max_len(max_len),.num_len(num_len),.max_len_bit_len(max_len_bit_len),.width(width),.height(height))u_moving_snake_2(.stoped(should_stop2),.clk(clk2),.rst(keystroke[8]),.di(d2),.prev_pos_num(snake2),.next_pos_num(snake2_wire),.should_stop(should_stop2_2),.len(score2));
    
endmodule
