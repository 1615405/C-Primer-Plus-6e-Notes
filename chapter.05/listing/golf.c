/* golf.c -- golf tournament scorecard */

// The assignments are made right to left: First, jane gets the value 68, and then tarzan does, and finally cheeta does.

#include <stdio.h>
int main(void)
{
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;
    printf("                  cheeta    tarzan    jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

    return 0;
}