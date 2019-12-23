module num2pos(input [15:0] num,
               output reg pos [89:0][119:0]);
    wire [6:0] row;
    wire [6:0] col;
    genvar i;
    genvar j;
    /* verilator lint_off WIDTH */
    assign row = num/90;
    assign col = num%90;
    /**probably not a good thing to use these operators since they're not systhesizable */
    generate
    for (i = 0; i < 90; i = i + 1) begin
        for (j = 0; j < 120; j = j + 1) begin
            always @(*) begin
                pos[i][j] = (i==row)&&(j==col)?1'b1:0'b0;
            end
        end
    end
    endgenerate
endmodule
