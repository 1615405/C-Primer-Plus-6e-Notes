/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 9 Exercise 6:
 * 
 * Write and test a function that takes the addresses of three double variables
 * as arguments and that moves the value of the smallest variable into the
 * first variable, the middle value to the second variable, and the largest
 * value into the third variable.
*/


#include <stdio.h>

double min(double, double);
double max(double, double);
void sort_variables(double *, double *, double *);

int main(void)
{
    double x, y, z;

    printf("Test sort_variables():\n");
    printf("Enter three numbers x, y, and z:\n");
    while (scanf("%lf %lf %lf", &x, &y, &z) == 3) {
        putchar('\n');
        printf("Before calling sort_variables:\n");
        printf("x = %f, y = %f, z = %f\n", x, y, z);

        sort_variables(&x, &y, &z);

        putchar('\n');
        printf("After calling sort_vatiables:\n");
        printf("x = %f, y = %f, z = %f.\n", x, y, z);

        putchar('\n');
        printf("Enter three numbers x, y, and z:\n");
    }

    return 0;
}

double min(double x, double y)
{
    return x < y ? x : y;
}

double max(double x, double y)
{
    return x > y ? x : y;
}

void sort_variables(double *x, double *y, double *z)
{
    double sum = *x + *y + *z;
    double t1 = min(min(*x, *y), *z);
    double t2 = max(max(*x, *y), *z);
    *x = t1;
    *y = sum - t1 - t2;
    *z = t2;
}