/* verilator lint_off STMTDLY */
module clk_div(input clk,
               input [1:0] clk_rate,
               output reg clk_game);
    reg [31:0] cnt;
    reg [31:0] ratio;
    initial begin
        cnt = 0;
        ratio = 4;
        clk_game = 0;
    end
    // when clk_rate is changed, we change the ratio
    always @(posedge clk) begin
        case (clk_rate)
        2'b00: ratio <= 1;
        2'b01: ratio <= 2;
        2'b10: ratio <= 4;
        2'b11: ratio <= 8;
        endcase
    end
    always @ (posedge clk) begin
        // division is 5000_0000 if your desired time is 1s
        // so it should be 1250_0000 to satisfy our need
        if (cnt < 1250_0000*ratio) begin
            cnt <= cnt + 1;
        end
        else begin
            cnt      <= 0;
            clk_game <= ~clk_game;
        end
    end
endmodule
