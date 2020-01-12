module moving_snake #(max_len = 16,
                      num_len = 10,
                      width = 32,
                      height = 24,
                      max_len_bit_len = 4)
                     (input stoped,
                      input clk,
                      input rst,
                      input [1:0] di,
                      input [max_len_bit_len-1:0] len,
                      input [max_len*num_len-1:0] prev_pos_num,
                      output [max_len*num_len-1:0] next_pos_num,
                      output reg should_stop);
    /**@param di
     * two bit representation of direction
     * 00 left
     * 01 right
     * 10 up
     * 11 down
     */
    initial begin
        should_stop = 0;
        next_pos = prev_pos_num[num_len-1:0];
    end
    /**the previous positions are all copied mindlessly when they are able to be copied */
    // actually previous implementation is much too complex for our board
    // so we just evaluate current situation and save the state in two small registers
    reg [num_len-1:0] next_pos;
    assign next_pos_num[num_len-1:0] = (should_stop||rst||stoped)?prev_pos_num[num_len-1:0]:next_pos;
    assign next_pos_num[num_len*max_len-1:num_len] = (should_stop||rst||stoped)?prev_pos_num[num_len*max_len-1:num_len]:prev_pos_num[num_len*max_len-num_len-1:0];
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            should_stop <= 0;
            next_pos <= prev_pos_num[num_len-1:0];
        end else begin
            case (di)
                2'b00: begin
                    if (prev_pos_num[num_len-1:0]%width == 0) should_stop <= 1;
                    else begin
                        should_stop <= 0;
                        if (prev_pos_num[num_len*2-1:num_len] != prev_pos_num[num_len-1:0]-1) begin
                            next_pos <= prev_pos_num[num_len-1:0]-1;
                        end
                        else begin
                            next_pos <= prev_pos_num[(len-1)*num_len+:num_len];
                        end
                    end
                end
                2'b01: begin
                    if (prev_pos_num[num_len-1:0]%width == width-1) should_stop <= 1;
                    else begin
                        should_stop <= 0;
                        if (prev_pos_num[num_len*2-1:num_len] != prev_pos_num[num_len-1:0]+1) begin
                            next_pos <= prev_pos_num[num_len-1:0]+1;
                        end
                        else begin
                            next_pos <= prev_pos_num[(len-1)*num_len+:num_len];
                        end
                    end
                end
                2'b10: begin
                    if (prev_pos_num[num_len-1:0]/width == 0) should_stop <= 1;
                    else begin
                        should_stop <= 0;
                        if (prev_pos_num[num_len*2-1:num_len] != prev_pos_num[num_len-1:0]-width) begin
                            next_pos <= prev_pos_num[num_len-1:0]-width;
                        end
                        else begin
                            next_pos <= prev_pos_num[(len-1)*num_len+:num_len];
                        end
                    end
                end
                2'b11: begin
                    if (prev_pos_num[num_len-1:0]/width == height-1) should_stop <= 1;
                    else begin
                        should_stop <= 0;
                        if (prev_pos_num[num_len*2-1:num_len] != prev_pos_num[num_len-1:0]+width) begin
                            next_pos <= prev_pos_num[num_len-1:0]+width;
                        end
                        else begin
                            next_pos <= prev_pos_num[(len-1)*num_len+:num_len];
                        end
                    end
                end
            endcase
        end
    end
endmodule
