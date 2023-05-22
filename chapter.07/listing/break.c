/* break.c -- uses break to exit a loop */

#include <stdio.h>

int main(void)
{
    float length, width;

    printf("Enter the length of the rectangle:\n");
    while (scanf("%f", &length) == 1)
    {
        printf("length = %0.2f:\n", length);
        printf("Enter its width:\n");
        if (scanf("%f", &width) != 1)
            break;
        printf("width = %0.2f:\n", width);
        printf("Area = %0.2f:\n", length * width);
        printf("Enter the length of the rectangle:\n");
    }
    printf("Done.\n");

    return 0;
}


/**
 * A break statement in a loop causes the program to break free of the loop that encloses it and to proceed to the next
 * stage of the program. If the break statement is inside nested loops, it affects only the innermost loop containing it
 * 
 * A break statement takes execution directly to the first statement following the loop; unlike the case for continue in
 * a for loop, the update part of the control section is skipped.
*/