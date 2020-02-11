#include <stdio.h>

int main()
{
    /* 
       To understand bitwise, first you need to know how
       to convert from decimal to binary. Divide the number by
       2.

       27 in binary:

       27 / 2 -> 13 : 1
       13 / 2 ->  6 : 1
       6  / 2 ->  3 : 0
       3  / 2 ->  2 : 1
       1  / 2 ->  2 : 1

       Remember, always read from right to left.
       
       Result: 11011 

       Example:
       
       Shift one bit to the right: 

       27 >> 1 = 01101

       01101 = 13

       It is important to know how to convert binary 
       to decimal as well.

       11011 in decimal.

       You have 5 numbers, so the first thing you need to do is 
       multiply each number from right to left increasing the 
       potency, starting with zero. Then, you multiply the result
       with the current binary number.

       Example:

       2 p 0 = 1  x 1 = 1
       2 p 1 = 2  x 1 = 2 
       2 p 2 = 4  x 0 = 0
       2 p 3 = 8  x 1 = 8
       2 p 4 = 16 x 1 = 16

       Sum the numbers:

       16 + 8 + 0 + 2 + 1

       Result: 27
   */

    printf("Result of 27 >> 1 is: %d\n", 27 >> 1); // 13

    /* 
        27 = 11011
        5  = 101

        & 11011
          00101
         ------
          00001

        Result: 1
    */
    printf("Result of 27 & 5 is: %d\n", 27 & 5); // 1

    return 0;
}