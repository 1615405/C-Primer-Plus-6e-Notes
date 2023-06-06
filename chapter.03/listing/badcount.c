/* badcount.c -- incorrect argument counts */

#include <stdio.h>

int main(void)
{
    int n = 4, m = 5;
    float f = 7.0f, g = 8.0f;

    printf("%d\n", n, m);
    printf("%d %d %d\n", n);
    printf("%d %d\n", f, g);

    return 0;
}