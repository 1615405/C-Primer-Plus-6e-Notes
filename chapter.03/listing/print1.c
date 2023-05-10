/* print1.c -- displays some properties of printf() */

#include <stdio.h>

int main()
{
    int ten = 10;
    int two = 2;
    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten);  // 遗漏两个参数
    
    return 0;
}

/**
 * the %d notation is used to indicate just where in a line the integer is to be printed. The %d is called a
 * format specifier because it indicates the form that printf() uses to display a value. Each %d in the format string
 * must be matched by a corresponding int value int the list of items to be printed. That value can be an int variable,
 * an int constant, or any other expression having an int value.
*/