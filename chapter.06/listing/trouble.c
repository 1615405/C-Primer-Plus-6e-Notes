/* trouble.c -- misuse of = will cause infinite loop */

#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;   
    int status;

    printf("Please rnter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status = 1) {     
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}


/**
 * Furthermore, the value of an assignment statement is the value of the left side, so status = 1 has the same numerical
 * value of 1. 
*/