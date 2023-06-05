#include <stdio.h>

int main(void)
{
    const float H20_MASS = 3.0e-23;
    const float GRAMS_H20_PER_QUART = 950.;
    float quarts;

    printf("Enter an amount of water (in quarts): ");
    scanf("%f", &quarts);
    printf("There are %f molecules in %f quarts of water.\n", quarts * GRAMS_H20_PER_QUART / H20_MASS, quarts);

    return 0;
}