/* verilator lint_off STMTDLY */
module clk_div_sim;
    // Inputs
    reg clk;
    reg [1:0] clk_rate;

    // Outputs
    wire clk_game;

    // Instantiate the Unit Under Test (UUT)
    clk_div uut (
        .clk(clk), 
        .clk_rate(clk_rate), 
        .clk_game(clk_game)
    );

    initial begin
        // Initialize Inputs
        clk = 0;
        clk_rate = 2'b00;
        #1000000000 clk_rate = 2'b01;
        #1000000000 clk_rate = 2'b10;
        #1000000000 clk_rate = 2'b11;
    end
    initial begin
        clk = 0;
        forever begin
            #5 clk = ~clk;
        end
    end
endmodule