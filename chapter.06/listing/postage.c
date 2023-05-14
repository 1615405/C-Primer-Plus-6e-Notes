/* postage.c -- first-class postage rates */

#include <stdio.h>

int main(void)
{
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    int ounces, cost;

    printf(" ounces  cost\n");
    for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ) {
        printf("%5d  $%4.2f\n", ounces, cost/100.0);
    }

    return 0;
}


/**
 * The comma is a sequence point, so all side effects to the left of the comma take place before the program moves to 
 * the right of the comma.
 * 
 * The comma being a sequence point guarantees that the side effects of the left subexpression occur before the right 
 * subexpression is evaluated. the value of the whole comma expression is the value of the right-hand member.
*/