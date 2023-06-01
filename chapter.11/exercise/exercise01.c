/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 11 Exercise 1:
 * 
 * Design and test a function that fetches the next n characters from input
 * (including blanks, tabs, and newlines), storing the results in an array
 * whose address is passed as an argument.
*/


#include <stdio.h>
#include <string.h>

#define SIZE 20

char *sgetnchar(char *, int);

int main(void)
{
    char hello[SIZE] = "Hello, ";
    int space = SIZE - strlen(hello) - 1;

    sgetnchar(hello + 7, space);
    puts(hello);

    return 0;
}

char *sgetnchar(char *array, int n)
{
    char ch;
    for (int i = 0; i < n; i++) {
        if ((ch = getchar()) == EOF) {
            break;
        }
        *(array + i) = ch;
    }

    return array;
}