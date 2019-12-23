module collision_check #(len = 1,
                         max_len = 16,
                         num_len = 10)
                       (input [159:0] snake1,
                         input [159:0] snake2,
                         input clk,
                         output reg should_stop1,
                         output reg should_stop2);
    reg [5:0] i;
    initial begin
        should_stop1 = 0;
        should_stop2 = 0;
    end
    always @(posedge clk) begin
        for (i = 0; i < len; i = i + 1) begin
            if (snake1[num_len-1:0] == snake2[i*max_len+:num_len]) should_stop1 <= 1;
            if (snake2[num_len-1:0] == snake1[i*max_len+:num_len]) should_stop2 <= 1;
        end
    end

endmodule
