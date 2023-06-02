/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 11 Exercise 9:
 * 
 * Write a function that replaces the contents of a string with the string
 * reversed. Test the function in a complete program that uses a loop to
 * provide input values for feeding to the function.
*/


#include <stdio.h>

#define LIMIT 50

void reverse_string(char *string);
char *get(char *string, int n);

int main(void)
{
    char string[LIMIT];
    while (get(string, LIMIT) && string[0] != '\0') {
        puts(string);
        reverse_string(string);
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

void reverse_string(char *start)
{
    char *end = start;
    while (*(end + 1) != '\0') {
        end++;
    }

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}