module collision_check #(max_len = 16,
                         num_len = 10,
                         max_len_bit_len = 4)
                        (input [max_len*num_len-1:0] snake1,
                         input [max_len*num_len-1:0] snake2,
                         input [max_len_bit_len-1:0] len1,
                         input [max_len_bit_len-1:0] len2,
                         input clk,
                         output reg should_stop1,
                         output reg should_stop2);
    reg [max_len_bit_len - 1:0] i;
    initial begin
        should_stop1 = 0;
        should_stop2 = 0;
    end
    always @(posedge clk) begin
        for (i = 0; i < len1; i = i + 1) begin
            if (snake2[num_len-1:0] == snake1[i*num_len+:num_len]) should_stop2 <= 1;
        end
        for (i = 0; i < len2; i = i + 1) begin
            if (snake1[num_len-1:0] == snake2[i*num_len+:num_len]) should_stop1 <= 1;
        end
    end
endmodule
