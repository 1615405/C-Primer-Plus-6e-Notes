/* power.c -- raises numbers to integer powers */

#include <stdio.h>

double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q to quit.\n");
    while (scanf("%lf %d", &x, &exp) == 2) {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bys!\n");

    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++) {
        pow *= n;
    }

    return pow;
}


/**
 * Employing a function involves three sperates steps:
 *     1. Declare the function with a function prototype.
 *     2. Use the function from within a program with a function call.
 *     3. Define the function
 * 
 * The prototype allows the compiler to see whether you've used the function correctly, and the definition sets down 
 * how the function works. The prototype and definition are examples of the contemporary programming practice of 
 * separating a program element into an interface and an implementation. The interface describes how a feature is used,
 * which is what a prototype does, and the implementation sets forth the particular actions taken, which is what the 
 * definition does.
*/