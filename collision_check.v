module collision_check(input [30:0][15:0] snake1,
                       input [30:0][15:0] snake2,
                       input clk,
                       output reg should_stop1,
                       output reg should_stop2);
    reg [15:0] i;
    always @(posedge clk) begin
        for (i = 0; i <= 30; i = i + 1) begin
            if (snake1[0]==snake2[i]) should_stop1 <= 1;
            if (snake2[0]==snake1[i]) should_stop2 <= 1;
        end
    end

endmodule
