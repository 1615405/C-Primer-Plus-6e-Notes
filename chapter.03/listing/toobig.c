/* toobig.c -- exceeds maximum int size on your system */

/**
 * The unsigned integer j is acting like a car's odometer. when it reaches its maximum value, it starts over at the
 * beginning. The integer i acts similarly. The main difference is that the unsigned int variable j, like an odometer,
 * begins at 0, but the int variable i begins at -2147483648.
*/


#include <stdio.h>

int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d %d %d\n", i, i + 1, i + 2);
    printf("%u %u %u\n", j, j + 1, j + 2);

    return 0;
}