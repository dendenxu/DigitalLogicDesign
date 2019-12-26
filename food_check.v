module food_check #(max_len = 16,
                    num_len = 10,
                    max_len_bit_len = 4)
                   (input clk,
                    input [num_len-1:0] snake_head,
                    input [num_len-1:0] food,
                    input [max_len_bit_len-1:0] prev_score,
                    output [max_len_bit_len-1:0] next_score);
    // DO NOT EAT ONE ANOTHER'S FOOD
    // I assume maybe this can be implemented the same way as the collision checker is done
    // just make the length of the snakes to be 1
    initial begin
        next_score = prev_score;
    end
    always @(posedge clk) begin
        if (snake_head == food) begin
            next_score <= prev_score+1;
        end
    end
endmodule
