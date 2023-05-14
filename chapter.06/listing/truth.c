/* truth.c -- what values are true */

#include <stdio.h>

int main(void)
{
    int n = 3;

    while (n)
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);

    n = -3;
    while (n)
        printf("%2d is true\n", n++);
    printf("%2d is false\n", n);

    return 0;
}


/**
 * All nonzero values are regarded as true, and only 0 is recognized as false. Alternatively, you can say that a while 
 * loop executes as long as its test condition evaluates to nonzero. Keep in mind that relational expressions evaluate 
 * to 1 if true and to 0 if false, so such expressions really are numeric.
*/