/**
 * C Primer Plus Sixth Edition3
 * 
 * Chapter 11 Exercise 2:
 * 
 * Modify and test the function in exercise 1 so that it stops after n
 * characters or after the first blank, tab, or newline, whichever comes
 * first. (Don’t just use scanf().)
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
    int i = 0;
    char ch;

    while ((ch = getchar()) != EOF && !isspace(ch) && i < n) {
        *(array + i) = ch;
        i++;
    }

    return array;
}