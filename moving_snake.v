module moving_snake #(index = 1,
                      max_len = 16,
                      num_len = 10)
                     (input clk,
                      input [1:0] di,
                      input [3:0] len,
                      input [159:0] prev_pos_num,
                      output [159:0] next_pos_num,
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
    reg [9:0] next_pos;
    assign next_pos_num[num_len-1:0] = should_stop?prev_pos_num[num_len-1:0]:next_pos;
    genvar j;
    generate
    for (j = num_len; j < max_len*num_len; j = j + 1) begin
        assign next_pos_num[j] = (should_stop&&j<len*num_len)?prev_pos_num[j]:prev_pos_num[j-num_len];
    end
    endgenerate
    always @(posedge clk) begin
        case (di)
            2'b00: begin
                if (prev_pos_num[num_len-1:0]%32 == 0) should_stop <= 1;
                else begin
                    should_stop <= 0;
                    if (prev_pos_num[num_len*2-1:num_len] != prev_pos_num[num_len-1:0]-1) begin
                        next_pos <= prev_pos_num[num_len-1:0]-1;
                    end
                    else begin
                        next_pos <= prev_pos_num[(len-1)*num_len+:10];
                    end
                end
            end
            2'b01: begin
                if (prev_pos_num[num_len-1:0]%32 == 31) should_stop <= 1;
                else begin
                    should_stop <= 0;
                    if (prev_pos_num[num_len*2-1:num_len] != prev_pos_num[num_len-1:0]+1) begin
                        next_pos <= prev_pos_num[num_len-1:0]+1;
                    end
                    else begin
                        next_pos <= prev_pos_num[(len-1)*num_len+:10];
                    end
                end
            end
            2'b10: begin
                if (prev_pos_num[num_len-1:0]/32 == 0) should_stop <= 1;
                else begin
                    should_stop <= 0;
                    if (prev_pos_num[num_len*2-1:num_len] != prev_pos_num[num_len-1:0]-32) begin
                        next_pos <= prev_pos_num[num_len-1:0]-32;
                    end
                    else begin
                        next_pos <= prev_pos_num[(len-1)*num_len+:10];
                    end
                end
            end
            2'b11: begin
                if (prev_pos_num[num_len-1:0]/32 == 23) should_stop <= 1;
                else begin
                    should_stop <= 0;
                    if (prev_pos_num[num_len*2-1:num_len] != prev_pos_num[num_len-1:0]+32) begin
                        next_pos <= prev_pos_num[num_len-1:0]+32;
                    end
                    else begin
                        next_pos <= prev_pos_num[(len-1)*num_len+:10];
                    end
                end
            end
        endcase
    end
endmodule
