module key2di(input [3:0] keys,
              output reg [1:0] di);
    always @(*) begin
        case (keys)
            4'b0001: di = 2'b00;
            4'b0010: di = 2'b01;
            4'b0100: di = 2'b10;
            4'b1000: di = 2'b11;
            // the default value should never be triggered
            // if multiple value is detected, we'll leave the direction as before
            default: ;
        endcase
    end
endmodule
