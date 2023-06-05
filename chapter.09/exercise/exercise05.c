#include <stdio.h>

void larger_of(double *, double *);

int main(void)
{
    double x, y;

    printf("Enter two numbers x and y: ");
    while (scanf("%lf %lf", &x, &y) == 2) {
        printf("Before calling larger_of():\n");
        printf("x = %f, y = %f\n", x, y);

        larger_of(&x, &y);

        printf("After calling larger_of():\n");
        printf("x = %f, y = %f\n", x, y);

        printf("Enter two numbers x and y: ");
    }

    return 0;
}

void larger_of(double *x, double *y)
{
    if (*x > *y) {
        *y = *x;
    } else {
        *x = *y;
    }
}