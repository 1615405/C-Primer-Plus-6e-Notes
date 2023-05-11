/* min_sec.c -- converts seconds to minutes and sesonds */

#include <stdio.h>
#define SEC_PER_MIN 60      // seconds in a minute

int main(void)
{
    int sec, min, left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds(<=0 to quit):\n");
    scanf("%d", &sec);                   // read number of seconds
    while (sec > 0) {
        min = sec / SEC_PER_MIN;         // truncated number of minute
        left = sec % SEC_PER_MIN;        // number of seconds left over
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");

    return 0;
}


/**
 * Don't bother trying to use modules operator with floating-point numbers. It just won't work.
 * 
 * In any case, the standard says, in effect, that if a and b are integer values, you can calculate a%b by subtracting
 * (a/b)*b from a.
 * -11 % 5: -11 - (-11 / 5) * 5 = -11 + 2 * 5 = -1;
*/