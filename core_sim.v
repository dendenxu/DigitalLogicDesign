/* verilator lint_off STMTDLY*/
module core_sim;

    // Inputs
    reg clk;
    reg [11:0] keystroke;

    // Instantiate the Unit Under Test (UUT)
    core uut (
        .clk_raw(clk), 
        .keystroke(keystroke)
    );

    initial begin
        // Initialize Inputs
        keystroke = 12'b0000_0100_0010;
        #10000000 keystroke = 12'b0000_0010_0010;
        #100000 keystroke[9] = 1;
        #10000000 keystroke = 12'b0000_1000_1000;

        // Wait 100 ns for global reset to finish
        
        // Add stimulus here
    end
    initial begin
        clk = 0;
        forever #0.1 clk =~clk;
    end
      
endmodule