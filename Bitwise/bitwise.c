#include <stdio.h>

/* 
        In C, operations can be performed on 
        a bit level using bitwise operators.
    
        Bitwise operators:

        &  - Bitwise AND
        |  - Bitwise OR
        ^  - Bitwise XOR (Exclusive OR)
        ~  - Bitwise NOT (One's Complement) (Unary)
        >> - Right Shift
        << - Left Shift

        Bitwise AND &

        | bit a | bit b  | a & b (a AND B) |
        |-------|--------|-----------------|
        |  0    |   0    |       0         |
        |-------|--------|-----------------|
        |  0    |   1    |       0         |
        |-------|--------|-----------------|
        |  1    |   0    |       0         |
        |-------|--------|-----------------|
        |  1    |   1    |       1         |
        |----------------------------------|

          11001000  
        & 10111000 
          -------- 
        = 10001000

        Bitwise OR |

        | bit a | bit b  | a | b (a OR B) |
        |-------|--------|----------------|
        |  0    |   0    |       0        |
        |-------|--------|----------------|
        |  0    |   1    |       1        |
        |-------|--------|----------------|
        |  1    |   0    |       1        |
        |-------|--------|----------------|
        |  1    |   1    |       1        |
        |---------------------------------|

         11001000  
       | 10111000 
         -------- 
       = 11111000

       Bitwise XOR ^

       | bit a | bit b  | a ^ b (a XOR B) |
       |-------|--------|-----------------|
       |  0    |   0    |       0         |
       |-------|--------|-----------------|
       |  0    |   1    |       1         |
       |-------|--------|-----------------|
       |  1    |   0    |       1         |
       |-------|--------|-----------------|
       |  1    |   1    |       0         |
       |----------------------------------|

        11001000  
      ^ 10111000 
        -------- 
      = 01110000

       Bitwise NOT ~ / One's Complement (Unary)

       | bit a | ~a (complement of a) |
       |-------|----------------------|
       |  0    |         1            |
       |-------|----------------------|
       |  1    |         0            |
       |------ |----------------------|

       ~ 11001000   
         -------- 
       = 00110111

      Right Shift >>

      The symbol of right shift operator is >>. For its operation, it 
      requires two operands. It shifts each bit in its left operand to 
      the right. The number following the operator decides the number 
      of places the bits are shifted (i.e. the right operand). Thus by 
      doing ch >> 3 all the bits will be shifted to the right by three 
      places and so on.

      Example:

      If the variable ch contains the bit pattern 11100101, 
      then ch >> 1 will produce the result 01110010, and 
      ch >> 2 will produce 00111001.
      
      Here blank spaces are generated simultaneously on the left when the 
      bits are shifted to the right. When performed on an unsigned type, 
      the operation performed is a logical shift, causing the blanks to 
      be filled by 0s (zeros). When performed on a signed type, the result 
      is technically undefined and compiler dependent,[5] however most 
      compilers will perform an arithmetic shift, causing the blank to be 
      filled with the sign bit of the left operand.

      Right shift can be used to divide a bit pattern by 2 as shown:

      Left Shift <<

      The symbol of left shift operator is <<. It shifts each bit in its 
      left-hand operand to the left by the number of positions indicated 
      by the right-hand operand. It works opposite to that of right shift 
      operator. Thus by doing ch << 1 in the above example we have 
      11001010. Blank spaces generated are filled up by zeroes as above.

      Left shift can be used to multiply an integer by powers of 2 as in:

      int i = 4; (bit pattern equivalent is binary 100)
      int j = i << 2; (makes it binary 10000, which multiplies the original number by 4 i.e. 16)
    
    */

int main()
{
  unsigned int bitA = 10, bitB = 20;

  printf("Bitwise AND: %d\n", bitA & bitB);
  printf("Bitwise OR: %d\n", bitA | bitB);
  printf("Bitwise XOR: %d\n", bitA ^ bitB);
  printf("Bitwise NOT: %d\n", bitA = ~bitA);
  printf("Right Shift: %d\n", bitB >> 1);
  printf("Left Shift: %d\n", bitB << 1);

  return 0;
}
