#include <stdio.h>
#include <stdlib.h>


int main()
{
    int ret = 0;

    /* Remember in C, every type tells the compiler exactly how big 
     * to make the variables and how to interpret the data you assign to them.
     * And by "how big", I mean how many bytes to reserve for the variables in
     * memory.
     */


   /* unsigned int (integer) is *usually* 4 bytes.  Unsigned
    * means that the most significant bit is NOT interpreted as
    * a sign bit. All bits are just used for the positive value. 
    *
    * So for 4 bytes, let's lay out all the bits (binary) 4 bytes * 8 bits/byte = 32 bits
    *
    * This is what all the bits look like if my_unsigned_int == 0 (MSB first)
    * 00000000 00000000 00000000 00000000
    *
    * This what all the bits look like if my_unsigned_int == 1 (MSB first)
    * 00000000 00000000 00000000 00000001
    *
    * This what all the bits look like if my_unsigned_int == 2 (MSB first)
    * 00000000 00000000 00000000 00000010
    *
    * This is what all the bits look like if my_unsigned_int == 4294967295
    * Obviously, we've run out of bits to store a higher number
    * If we increment again, we will rollover
    * (the MSB carry bit will be lost and the value will look like 0)
    * 11111111 11111111 11111111 11111111
    */
    unsigned int my_unsigned_int;


    /* signed int (integers) are also *usually* 4 bytes.
     * Signed means that the most significant bit IS interpret ted as the signed bit.
     *
     * Signed values look the same in binary for values low enough to not touch
     * the most significant bit.
     *
     * Here is my_signed_int_1 == 0
     * 00000000 00000000 00000000 00000000  
     * ^
     * |
     * Most significant bit (sign bit)
     *
     *
     * Here is my_signed_int_1 == 2147483647
     * 01111111 11111111 11111111 11111111  
     * ^
     * |
     * Most significant bit (sign bit) still 0
     *
     *
     * Here is my_signed_int_1 == -1
     * 11111111 11111111 11111111 11111111  
     * ^
     * |
     * Most significant bit (sign bit) is 1, this is a negative number
     * 
     * 
     * Here is my_signed_int_1 == -2147483648
     * 10000000 00000000 00000000 00000000  
     * ^
     * |
     * Most significant bit (sign bit) is 1, this is a negative number
     *
     */
    signed int   my_signed_int_1;
    int          my_signed_int_2;   // You can leave out the "signed", it's signed by default.


    return ret;
}

/* Compile
 *    g++ -Wall -Wextra -O0 -g ./02_add_some_variables.c -o 02_add_some_variables
 * Run
 *    $ ./02_add_some_variables
 *
 */
