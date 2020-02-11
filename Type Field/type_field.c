#include <stdio.h>

int main() {

  /*
      The Type field can be any of:

      | Character | Description                                                             |
      |-----------|-------------------------------------------------------------------------|
      | %         | Prints a literal % character (this type doesn't accept any flags,       | 
      |           | width, precision, length fields).                                       |
      |-----------|-------------------------------------------------------------------------|
      | d, i      | int as a signed integer. %d and %i are synonymous for output, but       |
      |           | are different when used with scanf() for input (where using %i will     |
      |           | interpret a number as hexadecimal if it's preceded by 0x, and octal     |
      |           | if it's preceded by 0.)                                                 |
      |-----------|-------------------------------------------------------------------------|
      | u         | Print decimal unsigned int.                                             |
      |-----------|-------------------------------------------------------------------------|
      | f, F      | double in normal (fixed-point) notation. f and F only differs in how    |
      |           | the strings for an infinite number or NaN are printed (inf, infinity    |
      |           | and nan for f; INF, INFINITY and NAN for F).                            |
      |-----------|-------------------------------------------------------------------------|
      | e, E      | double value in standard form ([-]d.ddd e[+/-]ddd). An E conversion     |
      |           | uses the letter E (rather than e) to introduce the exponent. The        |
      |           | exponent always contains at least two digits; if the value is zero,     |
      |           | the exponent is 00. In Windows, the exponent contains three digits      |
      |           | by default, e.g. 1.5e002, but this can be altered by Microsoft-specific | 
      |           | _set_output_format function.                                            |
      |-----------|-------------------------------------------------------------------------|
      | g, G      | double in either normal or exponential notation, whichever is more      |
      |           | appropriate for its magnitude. g uses lower-case letters, G uses        |
      |           | upper-case letters. This type differs slightly from fixed-point         |
      |           | notation in that insignificant zeroes to the right of the decimal       |
      |           | point are not included. Also, the decimal point is not included         |
      |           | on whole numbers.                                                       |
      |-------------------------------------------------------------------------------------|
      | x, X      | unsigned int as a hexadecimal number. x uses lower-case letters         |
      |           | and X uses upper-case.                                                  |
      |-------------------------------------------------------------------------------------|
      | o         | unsigned int in octal.                                                  |
      |-------------------------------------------------------------------------------------|
      | s         | null-terminated string.                                                 |
      |-----------|-------------------------------------------------------------------------|
      | c         | char (character).                                                       |
      |-----------|-------------------------------------------------------------------------|
      | p         | void * (pointer to void) in an implementation-defined format.           |
      |-----------|-------------------------------------------------------------------------|
      | a, A      | double in hexadecimal notation, starting with 0x or 0X. a uses          | 
      |           | lower-case letters, A uses upper-case letters.                          |
      |           | (C++11 iostreams have a hexfloat that works the same).                  |
      |-----------|-------------------------------------------------------------------------|
      | n         | Print nothing, but writes the number of characters successfully         |
      |           | written so far into an integer pointer parameter.                       |
      |           |                                                                         |
      |           | Java: indicates a platform neutral newline/carriage return.             |
      |           |                                                                         |
      |           | Note: This can be utilized in Uncontrolled format string exploits.      |
      |-------------------------------------------------------------------------------------|
  
  */

    printf("Example with unsigned int: %u\n", 10);
    printf("Example with signed int: %d\n", -10);

  return 0;
}