/* verilator lint_off STMTDLY*/
module core_sim;

    // Inputs
    reg clk;
    reg [11:0] keystroke;

    // Instantiate the Unit Under Test (UUT)
    // core #(.max_len(31),.max_len_bit_len(5))uut (
    core #(.max_len(15),.max_len_bit_len(4))uut (
        .clk_raw(clk), 
        .keystroke(keystroke)
    );

    initial begin
        // Initialize Inputs
        keystroke = 12'b0000_1000_0010;
        #1000000 keystroke = 12'b0000_0010_0010;
        #1000000 keystroke[9] = 1;
        #1000000 keystroke = 12'b0000_1000_1000;
        #1000000 keystroke[8] = 1;
        #50 keystroke[8] = 0;
        #1000000 keystroke[8] = 1;
        #50 keystroke[8] = 0;
        #4000000 keystroke = 12'b0000_1000_0010;
        keystroke[8] = 1;#50 keystroke[8] = 0;
        #1000000 keystroke = 12'b0000_0010_0010;
        #10000000 keystroke[8] = 1;#50 keystroke[8] = 0;


        // Wait 100 ns for global reset to finish
        
        // Add stimulus here
    end
    initial begin
        clk = 0;
        forever #5 clk =~clk;
    end
      
endmodule