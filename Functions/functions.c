#include <stdio.h>
#include <stdbool.h>

int sum(int, int);
void hello();
bool lightsOn();
bool lightsOff();

int main()
{
    printf("Sum: %d\n", sum(5, 5));
    hello();
    printf("Turn on: %d\n", lightsOn());
    printf("Turn off: %d\n", lightsOff());
}

int sum(int a, int b)
{
    return a + b;
}

void hello()
{
    printf("Hello :)\n");
}

bool lightsOn()
{
    return true;
}

bool lightsOff()
{
    return false;
}