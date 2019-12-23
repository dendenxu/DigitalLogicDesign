module num2pos(input [13:0] num,
               output reg pos [23:0][31:0]);
    wire [6:0] row;
    wire [6:0] col;
    genvar i;
    genvar j;
    /* verilator lint_off WIDTH */
    assign row = num/31;
    assign col = num%31;
    /**probably not a good thing to use these operators since they're not systhesizable */
    generate
    for (i = 0; i < 23; i = i + 1) begin
        for (j = 0; j < 31; j = j + 1) begin
            always @(*) begin
                pos[i][j] = (i==row)&&(j==col)?1'b1:0'b0;
            end
        end
    end
    endgenerate
endmodule
