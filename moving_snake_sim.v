module moving_snake_sim;

    // Inputs
    reg clk;
    reg clk_game;
    reg [1:0] di;
    reg [3:0] len;
    reg [159:0] prev_pos_num;
    wire [159:0] next_pos_num;
    wire should_stop;

    // Instantiate the Unit Under Test (UUT)
    moving_snake uut (
        .clk(clk_game), 
        .di(di), 
        .len(len),
        .prev_pos_num(prev_pos_num),
        .next_pos_num(next_pos_num),
        .should_stop(should_stop)
    );
    parameter initial_position = 160'b_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_11_1111_1111_00_0000_0001_00_0000_0010;
    initial begin
        // Initialize Inputs
        #100;
        di = 2'b01;
        len = 2;
        prev_pos_num = initial_position;
        // Add stimulus here
        #4000 di = 2'b11;
    end
    
    initial begin
        clk = 0;
        forever begin
            #5 clk = ~clk;
        end
    end
    initial begin
        clk_game = 0;
        forever begin
            #50 clk_game = ~clk_game;
        end
    end
    reg changed;
    always @(posedge clk) begin
        if(clk_game&&~changed) begin
            prev_pos_num <= next_pos_num;
            changed <= 1;
        end
        else if (~clk_game) begin
            changed <= 0;
        end
    end
endmodule

