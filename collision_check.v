module collision_check(input [15:0][9:0] snake1,
                       input [15:0][9:0] snake2,
                       input clk,
                       output reg should_stop1,
                       output reg should_stop2);
    reg [5:0] i;
    always @(posedge clk) begin
        for (i = 0; i < 16; i = i + 1) begin
            if (snake1[0]==snake2[i]) should_stop1 <= 1;
            if (snake2[0]==snake1[i]) should_stop2 <= 1;
        end
    end

endmodule
