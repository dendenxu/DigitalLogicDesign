module top(
    input clk
);
    core #(
        .init_should_stop1 (init_should_stop1 ),
        .init_should_stop2 (init_should_stop2 ),
        .init_changed      (init_changed      ),
        .init_ok           (init_ok           ),
        .init_clk_rate     (init_clk_rate     ),
        .init_food1        (init_food1        ),
        .init_food2        (init_food2        ),
        .init_score1       (init_score1       ),
        .init_score2       (init_score2       ),
        .init_snake1       (init_snake1       ),
        .init_snake2       (init_snake2       )
    )
    u_core(
    	.clk_raw   (clk       ),
        .keystroke (keystroke ),
        .snake1    (snake1    ),
        .snake2    (snake2    ),
        .score1    (score1    ),
        .score2    (score2    ),
        .food1     (food1     ),
        .food2     (food2     ),
        .game_over (game_over )
    );
    
    vga_main u_vga_main(
    	.snake1    (snake1    ),
        .snake2    (snake2    ),
        .score1    (score1    ),
        .score2    (score2    ),
        .food1     (food1     ),
        .food2     (food2     ),
        .game_over (game_over ),
        .keystroke (keystroke ),
        .vga_clk   (clk       ),
        .vga_rst   (1'b1      ),
        .hs        (hs        ),
        .vs        (vs        ),
        .r         (r         ),
        .g         (g         ),
        .b         (b         )
    );
    
endmodule