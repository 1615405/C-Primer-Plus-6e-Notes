/* t_and_f.c -- true and false values in C */

#include <stdio.h>

int main(void)
{
    int true_val, false_val;

    true_val = (10 > 2);        // value of a true ralationship
    false_val = (10 == 2);      // value of a false relationship
    printf("true = %d; false = %d \n", true_val, false_val);

    return 0;
}


/**
 * For C, a true expression has the value 1, and a false expression has the value 0.
*/