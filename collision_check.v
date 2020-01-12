// collision checker module
// if a snake is in one another's body, he's dead
// @param len the current length of the snake
module collision_check #(max_len = 31,
                         num_len = 10,
                         max_len_bit_len = 5)
                        (input [max_len*num_len-1:0] snake1,
                         input [max_len*num_len-1:0] snake2,
                         input [max_len_bit_len-1:0] len1,
                         input [max_len_bit_len-1:0] len2,
                         input clk,
                         input rst,
                         output reg should_stop1,
                         output reg should_stop2);
    reg [max_len_bit_len - 1:0] i;
    initial begin
        should_stop1 = 0;
        should_stop2 = 0;
    end
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            should_stop1 <= 0;
            should_stop2 <= 0;
        end else begin
        // When the the snake touches some one's body, it's gonna die
            if (snake2[num_len-1:0] == snake1[0+:num_len]) should_stop2 <= 1;
            for (i = 1; i < len1; i = i + 1) begin
                if (snake2[num_len-1:0] == snake1[i*num_len+:num_len]) should_stop2 <= 1;
                if (snake1[num_len-1:0] == snake1[i*num_len+:num_len]) should_stop1 <= 1;
            end
            if (snake1[num_len-1:0] == snake2[0+:num_len]) should_stop1 <= 1;
            for (i = 1; i < len2; i = i + 1) begin
                if (snake1[num_len-1:0] == snake2[i*num_len+:num_len]) should_stop1 <= 1;
                if (snake2[num_len-1:0] == snake2[i*num_len+:num_len]) should_stop2 <= 1;
            end
        end
    end
endmodule
