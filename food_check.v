module food_check#(max_len = 16,
                   num_len = 10)
                 (input [num_len-1:0] snake_head,
                   input [num_len-1:0] food,
                   input [3:0] prev_score,
                   output [3:0] next_score);
    // DO NOT EAT ONE ANOTHER'S FOOD
    // I assume maybe this can be implemented the same way as the collision checker is done
    // just make the length of the snakes to be 1
    
endmodule
