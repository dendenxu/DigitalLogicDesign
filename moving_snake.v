module moving_snake #(index = 1)
                     (input clk,
                      input [1:0] di,
                      input [30:0][15:0] prev_pos_num,
                      output reg [30:0][15:0] next_pos_num,
                      output reg should_stop);
    /**@param di
     * two bit representation of direction
     * 00 left
     * 01 right
     * 10 up
     * 11 down
     */
    initial begin
        // intial position
        for (i = 0; i < 5; i = i + 1) begin
            next_pos_num[i] = index ? 30 - i : i;
        end
        for (i = 5; i <= 30; i = i + 1) begin
            next_pos_num[i] = 'hffff;
        end
    end
    /**the previous positions are all copied mindlessly when they are able to be copied */
    reg [15:0] i;
    always @(posedge clk) begin
        case (di)
            2'b00: begin
                if (prev_pos_num[0]%120 == 0) begin
                    should_stop <= 1;
                end
                else begin
                    if (prev_pos_num[1] != prev_pos_num[0]-1) begin
                        for (i = 1; i <= 30; i = i + 1) begin
                            next_pos_num[i] <= prev_pos_num[i-1];
                        end
                        next_pos_num[0] <= prev_pos_num[0]-1;
                    end
                end
            end
            2'b01: begin
                if (prev_pos_num[0]%120 == 119) begin
                    should_stop <= 1;
                end
                else begin
                    if (prev_pos_num[1] != prev_pos_num[0]+1) begin
                        for (i = 1; i <= 30; i = i + 1) begin
                            next_pos_num[i] <= prev_pos_num[i-1];
                        end
                        next_pos_num[0] <= prev_pos_num[0]+1;
                    end
                end
            end
            2'b10: begin
                if (prev_pos_num[0]/120 == 0) begin
                    should_stop <= 1;
                end
                else begin
                    if (prev_pos_num[1] != prev_pos_num[0]-120) begin
                        for (i = 1; i <= 30; i = i + 1) begin
                            next_pos_num[i] <= prev_pos_num[i-1];
                        end
                        next_pos_num[0] <= prev_pos_num[0]-120;
                    end
                end
            end
            2'b11: begin
                if (prev_pos_num[0]/120 == 79) begin
                    should_stop <= 1;
                end
                else begin
                    if (prev_pos_num[1] != prev_pos_num[0]+120) begin
                        for (i = 1; i <= 30; i = i + 1) begin
                            next_pos_num[i] <= prev_pos_num[i-1];
                        end
                        next_pos_num[0] <= prev_pos_num[0]+120;
                    end
                end
            end
        endcase
    end
    
endmodule
