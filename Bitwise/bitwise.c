#include <stdio.h>

int main(void)
{
    int x0 = 0, x1 = 0, x2 = 1;
    printf("Value of x0 | x2: %d\n", x0 | x2);
    printf("Value of x1 | x2: %d\n", x1 | x2);
    printf("Value of (x1 | x2) << 1: %d\n", (x1 | x2) << 1);
    printf("Value of (x0 | x2) | (x1 | x2) << 1: %d\n", (x0 | x2) | (x1 | x2) << 1);
}