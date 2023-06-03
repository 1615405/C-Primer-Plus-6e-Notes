#include <stdio.h>

int main(void)
{

    const float PINTS_PER_CUP = .5;
    const float OUNCES_PER_CUP = 8;
    const float TBS_PER_CUP = 2 * OUNCES_PER_CUP;
    const float TSP_PER_CUP = 3 * TBS_PER_CUP;
    float cups;

    printf("Enter an amount in cups:");
    scanf("%f", &cups);
    printf("%f cups is equivalent to:\n", cups);
    printf("%f pints\n", cups * PINTS_PER_CUP);
    printf("%f ounces\n", cups * OUNCES_PER_CUP);
    printf("%f tablespoons\n", cups * TBS_PER_CUP);
    printf("%f teaspoons\n", cups * TSP_PER_CUP);

    return 0;
}