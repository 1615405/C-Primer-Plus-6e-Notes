/** 
 * C Primer Plus Sixth Edition
 *
 * Chapter 2 Exercise 7:
 * 
 * Many studies suggest that smiling has benefits. Write a program that produces the
 * following output:
 * 
 * Smile!Smile!Smile!
 * Smile!Smile!
 * Smile!
 *
 * Have the program define a function that displays the string Smile! once, and have the
 * program use the function as often as needed.
*/


#include <stdio.h>

void smile(void);

int main(void)
{
    for (int i = 3; i >= 1; i--) {
        smile();
    }
    printf("\n");
    for (int i = 1; i < 3; i++) {
        smile();
    }
    printf("\n");
    smile();
    printf("\n");
    
    return 0;
}

void smile(void)
{
    printf("Smile!");
}