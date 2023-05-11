/* prntval.c -- finding printf()'s return value */
#include <stdio.h>

int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);

    return 0;
}

/**
 * The printf() function has a return value; it returns the number of characters it printed. note that the count
 * includes all the printed characters, including the spaces and the unseen newline character.
*/