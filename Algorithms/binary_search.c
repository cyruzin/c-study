#include <stdlib.h>
#include <stdio.h>

#include "functions.h"

int main()
{
    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Result: %d\n", binarySearch(numbers, 6, 10));

    return 0;
}