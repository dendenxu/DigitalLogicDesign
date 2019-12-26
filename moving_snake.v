module moving_snake #(max_len = 16,
                      num_len = 10,
                      width = 32,
                      height = 24,
                      max_len_bit_len = 4)
                     (input clk,
                      input clk_raw,
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
        enable = 0;
        cnt = 0;
        // intial position
        // for (i = 0; i < 5; i = i + 1) begin
        //     next_pos_num[i] = index ? 30 - i : i;
        // end
        // for (i = 5; i < = 30; i = i + 1) begin
        //     next_pos_num[i] = 'hffff;
        // end
    end
    /**the previous positions are all copied mindlessly when they are able to be copied */
    // actually previous implementation is much too complex for our board
    // so we just evaluate current situation and save the state in two small registers
    reg [num_len-1:0] next_pos;
    assign next_pos_num[num_len-1:0] = should_stop?prev_pos_num[num_len-1:0]:next_pos;
    assign next_pos_num[num_len*max_len-1:num_len] = (should_stop)?prev_pos_num[num_len*max_len-1:num_len]:prev_pos_num[num_len*max_len-num_len-1:0];

    // reg enable;
    // reg [3:0] cnt;
    // always @(posedge clk_raw) begin
    //     if(clk) begin
    //         if(cnt == 4'b1111) begin
    //             cnt <= 0;
    //             enable <= 0;
    //         end else begin
    //             cnt <= cnt + 1;
    //             enable <= 1;
    //         end
    //     end
    // end
    always @(posedge clk) begin
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
endmodule
