/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 11 Exercise 5:
 * 
 * Design and test a function that searches the string specified by the first
 * function parameter for the first occurrence of a character specified by the
 * second function parameter. Have the function return a pointer to the
 * character if successful, and a null if the character is not found in the
 * string. (This duplicates the way that the library strchr() function works.)
 * Test the function in a complete program that uses a loop to provide input
 * values for feeding to the function.
*/


#include <stdio.h>

#define LIMIT 10

char *findchar(char *str, const char ch);

int main(void)
{
    char string[LIMIT];
    char *chloc;
    char ch;

    while (fgets(string, LIMIT, stdin) && *string != '\n') {
        ch = getchar();
        chloc = findchar(string, ch);
        if (chloc == NULL) {
            printf("character %c not found in %s\n", ch, string);
        } else {
            printf("character %c found at index %lu in %s\n", ch, chloc - string, string);
        }
        while ((ch = getchar()) != '\n') {
            continue;
        }
    }

    puts("Bye");

    return 0;
}

char *findchar(char *str, const char ch)
{
    while (*str != '\0') {
        if (*str == ch) {

            return str;
        }
        str++;
    }
    return NULL;
}