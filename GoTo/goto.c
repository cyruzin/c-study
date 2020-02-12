#include <stdio.h>

int main()
{
    const int maxInput = 5;
    int count;
    double number, average, sum = 0.0;

    for (count = 1; count <= maxInput; ++count)
    {
        printf("%d. Enter a number: ", count);
        scanf("%lf", &number);

        if (number < 0.0)
            goto jump;

        sum += number;
    }

jump:
    average = sum / (count - 1);
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f", average);
    return 0;
}