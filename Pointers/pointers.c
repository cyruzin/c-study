#include <stdio.h>

int main()
{
    int age = 31;
    int *p;

    p = &age;

    // 31
    printf("%d\n", *p);

    *p += 1;
    // 32
    printf("%d\n", *p);
    // 32
    printf("%d\n", age);
}