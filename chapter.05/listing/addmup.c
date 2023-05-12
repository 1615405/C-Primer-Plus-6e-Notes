/* addmup.c -- five kinds of statements */

#include <stdio.h>

int main(void)                      /* finds sum of first 20 integers */
{
    int count, sum;                 /* declaration statement          */

    count = 0;                      /* assignment statement           */
    sum = 0;                        /* ditto                          */

    while (count++ < 20) {          /* while                          */
        sum = sum + count;          /*             statement          */
    }

    printf("sum = %d\n", sum);      /* function statement             */

    return 0;                       /* return statement               */
}


/**
 * A side effect is the modification of a data object or file. A sequence point is a point in program execution at which
 * all side effects are evaluated before going on to the next step. A full expression is one that's not a subexpression
 * of a larger expression.
 * 
 * In the absence of braces, a while statement runs from the while to the next semicolon;
*/