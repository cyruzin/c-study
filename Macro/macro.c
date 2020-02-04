#include <stdio.h>

#ifdef __linux
const char *os = "You are on a Linux machine";
#else
const char *os = "You are not on a Linux machine";
#endif

int main()
{
    printf("Where am I?\n");
    printf("%s\n", os);

    return 0;
}
