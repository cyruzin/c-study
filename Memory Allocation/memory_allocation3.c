#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, count, arrSize;

    printf("Inform the array size: ");
    scanf("%d", &arrSize);

    printf("Array size: %d\n", arrSize);

    if ((ptr = calloc(arrSize, sizeof *ptr)) == NULL)
    {
        printf("Could not allocate more memory\n");
        exit(EXIT_FAILURE);
    }

    printf("Memory allocated successfully\n");

    for (count = 0; count < arrSize; ++count)
    {
        ptr[count] = count + 1;
    }

    printf("Values: \n");

    for (count = 0; count < arrSize; ++count)
    {
        printf("%d ", ptr[count]);
    }

    free(ptr);
    ptr = NULL;

    return 0;
}