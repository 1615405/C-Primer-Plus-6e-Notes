#include <stdio.h>

int main(void)
{
    long int limit;
    float sign = 1.0f;
    float series1 = 0, series2 = 0;

    printf("Enter a number of terms to sum: ");
    scanf("%ld", &limit);

    for (long int i = 1; i <= limit; i++)
    {
        series1 += 1.0f / i;
        series2 += (1.0f / i) * sign;
        sign = -sign;
    }

    printf("The %ldth partial sum for series 1 is: %.5f\n", limit, series1);
    printf("The %ldth partial sum for series 2 is: %.5f\n", limit, series2);

    return 0;
}