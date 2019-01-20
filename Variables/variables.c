#include <stdio.h>

int main()
{
    int age;
    age = 31;

    // single line declaration
    int a, b, c;
    a = 5;
    b = 54;
    c = 12;

    // literal
    int ageLiteral = 31;

    // literal with single line declaration
    int test1 = 10, test2 = 20, test3 = 30;

    // int pointer
    int *p;
    p = &test1;

    printf("%d\n", age);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", ageLiteral);
    printf("%d\n", test1);
    printf("%d\n", test2);
    printf("%d\n", test3);
    printf("%p\n", p);

    return 0;
}
