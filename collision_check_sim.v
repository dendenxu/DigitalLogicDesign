module collision_check_sim;

    // Inputs
    reg [159:0] snake1;
    reg [159:0] snake2;
    reg clk;

    // Outputs
    wire should_stop1;
    wire should_stop2;

    // Instantiate the Unit Under Test (UUT)
    collision_check uut (
        .snake1(snake1), 
        .snake2(snake2), 
        .clk(clk), 
        .should_stop1(should_stop1), 
        .should_stop2(should_stop2)
    );
    parameter initial_position_1 = 160'b_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_00_0000_0001_00_0000_0010;
    parameter initial_position_2 = 160'b_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_00_0000_0001_00_0000_0010;
    initial begin
        // Initialize Inputs
        #100;
        snake1 = initial_position_1;
        snake2 = initial_position_2;
        // Add stimulus here
        #4000 di = 2'b11;
    end
    
    initial begin
        clk = 0;
        forever begin
            #5 clk = ~clk;
        end
    end
      
endmodule