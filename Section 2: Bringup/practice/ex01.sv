module top_module ( 
    input p1a, p1b, p1c, p1d, p1e, p1f,
    output p1y,
    input p2a, p2b, p2c, p2d,
    output p2y );

    wire one_first;
    wire one_second;
    wire two_first;
    wire two_second;

    assign one_first = p1a & p1b & p1c;
    assign one_second = p1d & p1e & p1f;
    assign p1y = one_first | one_second;

    assign two_first = p2a & p2b;
    assign two_second = p2c & p2d;
    assign p2y = two_first | two_second;

endmodule
