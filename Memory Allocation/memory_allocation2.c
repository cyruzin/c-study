#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    int arrSize;

    printf("Inform the array size: ");
    scanf("%s", &arrSize);

    if ((ptr = malloc(sizeof *ptr * arrSize)) == NULL)
    {
        printf("Could not allocate more memory\n");
        exit(EXIT_FAILURE);
    }

    printf("Memory allocated successfully\n");

    printf("Increase the array size: ");
    scanf("%s", &arrSize);

    if ((ptr = realloc(ptr, sizeof *ptr * arrSize)) == NULL)
    {
        printf("Could not reallocate memory\n");
        exit(EXIT_FAILURE);
    }

    printf("Memory reallocated successfully\n");

    free(ptr);
    ptr = NULL;

    return 0;
}