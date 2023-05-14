/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 6 Exercise 4:
 * 
 * Use nested loops to produce the following pattern:
 * A
 * BC
 * DEF
 * GHIJ
 * KLMNO
 * PQRSTU
*/


#include <stdio.h>

int main(void)
{
    char c = 'A';

    for (int i = 1; i < 7; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", c++);
        }
        printf("\n");
    }
    
    return 0;
}