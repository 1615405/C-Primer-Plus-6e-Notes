/* toobig.c -- exceeds maximum int size on your system */

#include <stdio.h>

int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d %d %d\n", i, i + 1, i + 2);
    printf("%u %u %u\n", j, j + 1, j + 2);

    return 0;
}


/**
 * The unsigned integer j is acting like a car's odometer. when it reaches its maximum value, it starts over at the
 * beginning. The integer i acts similarly. The main difference is that the unsigned int variable j, like an odometer,
 * begins at 0, but the int variable i begins at -2147483648.
 * 
 * Octal and hexadecimal constants are treated as type iny unless the value is too large. Then the compiler tries
 * unsigned int. If that doesn't work, it tries, in order, long, unsigned long, long long, and unsigned long long.
 * 
 * To cause a small constant to be treated as type long, you can append an l or L as a suffix. Similarly, on those
 * systems supporting the long long type, you can use ll or LL suffix to indicate a long long value.
*/