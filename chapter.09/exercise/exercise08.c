#include <stdio.h>
#include <stdlib.h>

double power(double, int);

int main(void)
{
    double base, output;
    int exponent;

    while (scanf("%lf %d", &base, &exponent) == 2) {
        output = power(base, exponent);
        printf("%f ^ %d = %f\n", base, exponent, output);
    }

    return 0;
}

double power(double base, int exponent)
{
    double power = 1;

    if (base == 0) {
        if (exponent == 0) {
            printf("Warning: 0 ^ 0 is undefined. Using 1.\n");
            return 1.0;
        }
        return 0;
    }

    for (int i = 1; i <= abs(exponent); i++) {
        power *= base;
    }

    if (exponent < 0) {
        power = 1 / power;
    }

    return power;
}