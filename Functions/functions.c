#include <stdio.h>
#include "functions.h"

int main()
{
    printf("Sum: %d\n", sum(5, 5));
    hello();
    printf("Turn on: %d\n", lightsOn());
    printf("Turn off: %d\n", lightsOff());

    return 0;
}