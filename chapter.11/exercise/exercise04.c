/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 11 Exercise 4:
 * 
 * Design and test a function like that described in Programming Exercise 3
 * except that it accepts a second parameter specifying the maximum number of
 * characters that can be read.
*/


#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 20

char *getword(char *target, int n);

int main(void)
{
    char hello[SIZE] = "Hello, ";
    getword(hello + 7);
    puts(hello);

    return 0;
}

char *getword(char *target, int n)
{
    char ch;
    int i = 0;
    bool inword = false;

    while ((ch = getchar()) != EOF && i < n) {
        if (isspace(ch)) {
            if (inword) {
                break;
            } else {
                continue;
            }
        }

        if (!inword) {
            inword = true;
        }
        *(target + i) = ch;
        i++;
    }

    while ((ch = getchar()) != '\n') {
        continue;
    }

    return target;
}