module blink_tb ();

    reg r_Clock = 1'b0;

    always #1 r_Clock <= ~r_Clock;
  
    // Need to set up parameters appropriately
    // These will blink much faster than on hardware.
    // This allows simulation to run quickly.
    blink #(.g_COUNT_1HZ(50)) UUT
        (.i_Clk(r_Clock), .o_LED());

    initial 
        begin
            $display("Starting Testbench...");
            #200;
            $finish();
        end
  
    initial 
        begin
        // Required to dump signals to EPWave
            $dumpfile("dump.vcd");
            $dumpvars(0);
        end
endmodule // blink_tb
