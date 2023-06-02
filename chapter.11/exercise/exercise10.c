/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 11 Exercise 10:
 * 
 * Write a function that takes a string as an argument and removes the spaces
 * from the string. Test it in a program that uses a loop to read lines until
 * you enter an empty line. The program should apply the function to each input
 * string and display the result.
*/


#include <stdio.h>

#define LIMIT 50

void remove_spaces(char *string);
char *get(char *string, int n);

int main(void)
{
    char string[LIMIT];

    while (get(string, LIMIT) && string[0] != '\0') {
        remove_spaces(string);
        puts(string);
    }

    return 0;
}

char *get(char *string, int n)
{
    char *ret_val = fgets(string, n, stdin);

    while (*string) {
        if (*string == '\n') {
            *string = '\0';
            break;
        }
        string++;
    }
    return ret_val;
}

void remove_spaces(char *string)
{
    int spaces = 0;
    while (1) {
        if (*string == ' ') {
            spaces++;
        } else {
            *(string - spaces) = *string;
        }

        if (*string == '\0') {
            break;
        }

        string++;
    }
}