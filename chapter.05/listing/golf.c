/* golf.c -- golf tournament scorecard */

#include <stdio.h>
int main(void)
{
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;
    printf("                  cheeta    tarzan    jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

    return 0;
}

/**
 * The assignments are made right to left: First, jane gets the value 68, and then tarzan does, and finally cheeta does.
 * 
 * income = salary + bribes; As a reminder, note the income, salary, and bribes all are modifiable lvalues because each
 * identifies a data object that could be assigned a value, but the expression salary + bribes is an rvalue, a 
 * calculated value not identified with a particular memory location.
*/