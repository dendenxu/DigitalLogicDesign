module lfsr#(num_len = 10)
            (input clk,
             input rst,
             input en,
             output reg [num_len-1:0] out);
    initial begin
        out = 4;
    end
    always @(posedge clk) begin
        if (rst) out     <= 1; // can be anything except zero
        else if (en) out <= {out[num_len-2:0], out[num_len-1] ^ out[num_len-2] ^ out[num_len-3] ^ out[num_len-4] ^ out[num_len-5] ^ out[num_len-6] ^ out[num_len-7] ^ out[num_len-8]}; // polynomial for maximal LFSR
    end
endmodule
