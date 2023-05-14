/* sweetie2.c -- a counting loop using for */

#include <stdio.h>

int main(void)
{
    const int NUMBER = 22;
    int count;

    for (count = 1; count <= NUMBER; count++) {
        printf("Be my Valentime!\n");
    }

    return 0;
}


/**
 * The for loop gathers all three actions(initializing, testing, and updating) into one place.
 * 
 * The first expression is the initialization. It is done just once, when the for loop first starts. The second 
 * expression is the test condition; it is evaluated before each potential execution of a loop. When the expression is
 * false, the loop is terminated. The third expression, the change or update, is evaluated at the end of each loop.
 * 
 * Each of the three control expressions is a full expression, so any side effects in a control expression, such as 
 * incrementing a value, take place before the program evaluates another expression.
*/