#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count;

    printf("Total arguments: %d\n", argc);

    for (count = 1; count <= argc; count++)
    {
        // Compile and test like this:
        // gcc -o args args.c && ./args this is a test
        printf("%d - argument: %s \n", count, argv[count - 1]);
    }

    return 0;
}
