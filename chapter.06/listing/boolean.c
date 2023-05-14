/* boolean.c -- using a _Bool variable */

#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter an integer to be sumed (q to quit): ");
    input_is_good = (scanf("%ld", &num) == 1);
    while (input_is_good) {
        sum = sum + num;
        printf("Please enter an integer to be sumed (q to quit): ");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}


/**
 * A _Bool variable can only have a value of 1(true) or 0(false). If you try to assign a nonzero numeric value to a 
 * _Bool variable, the variable is set to 1, reflecting that C considers any nonzero value to be true.
 * 
 * C99 also provides for a stdbool.h header files. This header file makes bool an alias for _Bool and defines true and 
 * false as symbolic constants for the values 1 and 0. 
*/