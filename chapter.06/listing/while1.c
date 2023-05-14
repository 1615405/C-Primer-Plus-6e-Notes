/* while1.c -- watch your beaces */

#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n < 3)
        printf("n is %d\n", n);
        n++;
    printf("That's all the program does\n");

    return 0; 
}


/**
 * When using while, keep in mind that only the single statement, simple or compound, following the test condition is 
 * part of the loop.
*/