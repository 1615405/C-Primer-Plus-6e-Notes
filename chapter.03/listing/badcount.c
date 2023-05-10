/* badcount.c -- incorrect argument counts */

#include <stdio.h>

int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    printf("%d\n", n, m);    /* too many arguments   */
    printf("%d %d %d\n", n); /* too few arguments    */
    printf("%d %d\n", f, g); /*  wrong kind of value */

    return 0;
}

/**
 * C now has a function-prototyping mechanism that checks whether a function call has the correct number and correct
 * kind of arguments, but it doesn't work with printf() and scanf() because they take a variable number of arguments.
*/