/* verilator lint_off STMTDLY */
module key2di_sim;

    // Inputs
    reg [3:0] keys;

    // Outputs
    wire [1:0] di;

    // Instantiate the Unit Under Test (UUT)
    key2di uut (
        .keys(keys), 
        .di(di)
    );

    initial begin
        // Initialize Inputs
        #100 keys = 4'b0001;
        #100 keys = 4'b0010;
        #100 keys = 4'b0100;
        #100 keys = 4'b1000;
        // Add stimulus here
    end
      
endmodule