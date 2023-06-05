/* printout.c -- uses conversion specifiers */

#include <stdio.h>

#define PI 3.141593

int main()
{
    int number = 7, cost = 7800;
    float pies = 12.75;

    printf("The %d contestants ate %f berry pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n", '$', 2 * cost);

    return 0;
}