/* C Primer Plus Sixth Edition

> Chapter 2 Exercise 6:

> Write a program that creates an integer variable called toes. Have the program set toes
to 10. Also have the program calculate what twice toes is and what toes squared is. The
program should print all three values, identifying them.
*/


#include <stdio.h>

int main(void)
{
    int toes = 10;
    int twotimes = 2 * toes;
    int square = toes * toes;
    printf("origin toes is %d \n", toes);
    printf("double toes is %d \n", twotimes);
    printf("square toes is %d \n", square);

    return 0;
}