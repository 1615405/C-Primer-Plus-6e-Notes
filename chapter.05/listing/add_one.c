/* add_one.c -- incrementing: prefix and postfix */

#include <stdio.h>

int main(void)
{
    int ultra = 0, super = 0;

    while (super < 5) {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d\n", super, ultra);
    }

    return 0;
}


/**
 * Another advantage of the increment operator is that it usually produces slightly more efficient machine language code
 * because it is similar to actual machine language instrcutions. However, as vendors produce better C compilers, this 
 * advantage may disappear. A smart compiler can recognize that x = x + 1 can be treated the same as ++x.
*/