/* addmup.c -- five kinds of statements */

#include <stdio.h>

int main(void)
{
    int count = 0, sum = 0;

    while (count++ < 20) {
        sum = sum + count;
    }

    printf("sum = %d\n", sum);

    return 0;
}