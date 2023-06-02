/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 11 Exercise 8:
 * 
 * Write a function called string_in() that takes two string pointers as
 * arguments. If the second string is contained in the first string, have the
 * function return the address at which the contained string begins. For
 * instance, string_in("hats", "at") would return the address of the a in hats.
 * Otherwise, have the function return the null pointer. Test the function in a
 * complete program that uses a loop to provide input values for feeding to the
 * function.
*/


#include <stdio.h>

#define LIMIT 50

char *string_in(char *, char *);
char *get(char *, int n);

int main(void)
{
    char string[LIMIT];
    char substring[LIMIT];
    while (get(string, LIMIT) && string[0] != '\0') {
        get(substring, LIMIT);
        char *substr_loc = string_in(string, substring);
        if (substr_loc) {
            printf("%s found in %s at index %lu\n", substring, string, substr_loc - string);
        } else {
            puts("No");
        }
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

char *string_in(char *string, char *substring)
{
    int i;
    while (*string) {
        i = 0;
        while (*(string + i) == *(substring + i)) {
            i++;
            if (*(substring + i) == '\0') {
                return string;
            }
        }
        string++;
    }

    return NULL;
}