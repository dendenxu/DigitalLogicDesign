module lfsr#(num_len = 10)
            (input clk,
             input rst,
             input en,
             output reg [num_len-1:0] out);
    initial begin
        out = 1;
    end
    always @(posedge clk or posedge rst) begin
        if (rst) out     <= 1; // can be anything except zero
        else if (en) out <= {out[num_len-2:0], out[num_len-1] ^ out[num_len-2]}; // polynomial for maximal LFSR
    end
endmodule
