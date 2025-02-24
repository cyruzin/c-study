#include <stdio.h>

int main()
{
    /*
       To understand bitwise operations, first you need to know how
       to convert from decimal to binary. Divide the number by
       2 and keep track of the remainders.

       27 in binary:

       27 / 2 -> 13 : 1
       13 / 2 ->  6 : 1
       6  / 2 ->  3 : 0
       3  / 2 ->  1 : 1
       1  / 2 ->  0 : 1

       Remember, always read the remainders from bottom to top.

       Result: 11011

       Example:

       Right bit shift (>>):

       27 >> 1 = 13

       11011 >> 1 = 01101

       01101 = 13

       It is important to know how to convert binary
       to decimal as well.

       11011 in decimal:

       You have 5 bits, so the first thing you need to do is
       multiply each bit from right to left by 2 raised to the power
       of its position, starting with zero. Then, sum the results.

       Example:

       2^0 = 1  x 1 = 1
       2^1 = 2  x 1 = 2
       2^2 = 4  x 0 = 0
       2^3 = 8  x 1 = 8
       2^4 = 16 x 1 = 16

       Sum the numbers:

       16 + 8 + 0 + 2 + 1 = 27
   */

    printf("Result of 27 >> 1 is: %d\n", 27 >> 1); // 13

    /*
        Example of bitwise AND (&):

        27 = 11011
        5  = 00101

          11011
        & 00101
         ------
          00001

        Result: 1
    */
    printf("Result of 27 & 5 is: %d\n", 27 & 5); // 1

    return 0;
}
