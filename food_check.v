module food_check #(max_len = 16,
                    num_len = 10,
                    max_len_bit_len = 4,
                    width = 32,
                    height = 24)
                   (input clk,
                    input [num_len-1:0] snake_head,
                    input [num_len-1:0] prev_food,
                    input [max_len_bit_len-1:0] prev_score,
                    output reg [max_len_bit_len-1:0] next_score,
                    output reg [num_len-1:0] next_food);
    // DO NOT EAT ONE ANOTHER'S FOOD
    // I assume maybe this can be implemented the same way as the collision checker is done
    // just make the length of the snakes to be 1
    wire [num_len-1:0] rand_food;
    reg [num_len-1:0] rand_food_usable;
    always @(*) begin
        if (rand_food!=prev_food) begin
            if (rand_food < width*height) begin
                rand_food_usable = rand_food;
            end
        end else rand_food_usable = rand_food_usable;
    end
    lfsr u_lfsr(
    // .clk (clk),
    .rst (1'b0),
    .en  (1'b1),
    .out (rand_food)
    );
    
    initial begin
        next_score = prev_score;
        next_food = prev_food;
        rand_food_usable = 0;
    end
    always @(posedge clk) begin
        if (snake_head == prev_food) begin
            next_score <= prev_score + 1;
            next_food  <= rand_food;
        end else begin
            next_score <= prev_score;
            next_food <= prev_food;
        end
    end
endmodule
