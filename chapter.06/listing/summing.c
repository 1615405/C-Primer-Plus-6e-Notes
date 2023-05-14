/* summing.c -- sums integers entered interactively */

#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;    /* initialize sum to zero */
    int status;

    printf("Please rnter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status == 1) {     /* == meaning "is equal to" */
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}


/**
 * If scanf() runs into a problem before attemping to convert the value(for example, by detecting the end of the file 
 * or by encountering a handware problem), it returns the special value EOF, which typically is defined as -1.
 * 
 * 
*/