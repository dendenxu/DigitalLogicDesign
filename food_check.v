module food_check #(max_len = 16,
                    num_len = 10,
                    max_len_bit_len = 4,
                    width = 32,
                    height = 24)
                   (input clk_raw,
                    input clk,
                    input [max_len*num_len-1:0] snake1,
                    input [max_len*num_len-1:0] snake2,
                    input [num_len-1:0] food2,
                    input [num_len-1:0] snake_head,
                    input [num_len-1:0] prev_food,
                    input [max_len_bit_len-1:0] prev_score,
                    output reg [max_len_bit_len-1:0] next_score,
                    output reg [num_len-1:0] next_food);
    // DO NOT EAT ONE ANOTHER'S FOOD
    // I assume maybe this can be implemented the same way as the collision checker is done
    // just make the length of the snakes to be 1
    // We need to make sure that the rand_food usable doesn't appear where the snake is
    /* verilator lint_off UNOPTFLAT */
    wire [num_len-1:0] rand_food;
    reg [num_len-1:0] rand_food_usable;
    wire food_pos_is_good;
    wire [max_len-1:0] food_not_in_snake1;
    wire [max_len-1:0] food_not_in_snake2;
    reg not_assigned_yet;
    generate
    genvar i;
        for (i = 0; i < max_len; i = i + 1) begin
            assign food_not_in_snake1[i] = rand_food!=snake1[i*num_len+:num_len];
            assign food_not_in_snake2[i] = rand_food!=snake2[i*num_len+:num_len];
        end
    endgenerate
    assign food_pos_is_good = (&food_not_in_snake1)&&(&food_not_in_snake2)&&(rand_food!=food2)&&(rand_food!=prev_food)&&(rand_food < width*height);
    always @(*) begin
        if (food_pos_is_good&&not_assigned_yet&&clk) begin
            rand_food_usable = rand_food;
            not_assigned_yet = 0;
        end else if (~clk) not_assigned_yet = 1;
    end
    lfsr u_lfsr(
    .clk (clk_raw),
    .rst (1'b0),
    .en  (1'b1),
    .out (rand_food)
    );
    
    initial begin
        not_assigned_yet = 1;
        next_score = prev_score;
        next_food = prev_food;
        rand_food_usable = 0;
    end
    always @(posedge clk_raw) begin
        if (snake_head == prev_food) begin
            next_score <= prev_score + 1;
            next_food  <= rand_food_usable;
        end else begin
            next_score <= prev_score;
            next_food <= prev_food;
        end
    end
endmodule
