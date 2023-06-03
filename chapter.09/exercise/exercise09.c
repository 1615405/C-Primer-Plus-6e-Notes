#include <stdio.h>
#include <stdlib.h>

double power(double base, int exponent);

int main(void)
{
    double base, output;
    int exponent;

    printf("Test power() function:\n");

    while (scanf("%lf %d", &base, &exponent) == 2) {
        output = power(base, exponent);
        printf("%f ^ %d = %f\n", base, exponent, output);
    }

    return 0;
}

double power(double base, int exponent)
{
    if (base == 0) {
        if (exponent == 0) {
            printf("Warning: 0 ^ 0 is undefined. Using 1.\n");
            return 1.0;
        }
        return 0;
    }
    if (exponent == 0)  return 1;

    double dbl_power = base * power(base, abs(exponent) - 1);

    if (exponent < 0) dbl_power = 1 / dbl_power;

    return dbl_power;
}