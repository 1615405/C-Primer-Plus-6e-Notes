/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 11 Exercise 12:
 * 
 * Write a program that reads input up to EOF and reports the number of words,
 * the number of uppercase letters, the number of lowercase letters, the number
 * of punctuation characters, and the number of digits. Use the ctype.h family
 * of functions.
*/


#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    char ch;
    int upper = 0, lower = 0, punct = 0, digits = 0, words = 0;
    bool inword = false;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            if (!inword) {
                inword = true;
                words++;
            }
            if (isupper(ch)) {
                upper++;
            }
            if (islower(ch)) {
                lower++;
            }
        }
        else if (isdigit(ch)) {
            digits++;
            inword = false;
        }
        else if (ispunct(ch)) {
            punct++;
            if (ch != '-' && ch != '\'') {
                inword = false;
            }
        }
        else if (isspace(ch)) {
            inword = false;
        }
    }

    printf("lower = %d, upper = %d, words = %d, digits = %d, punct = %d\n", lower, upper, words, digits, punct);

    return 0;
}