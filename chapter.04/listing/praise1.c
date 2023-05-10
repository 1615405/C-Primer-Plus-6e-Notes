/* praise1.c -- uses an assortment of strings */

#include <stdio.h>
#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}

/**
 * After scanf() starts to read input, it stops reading at the first whitespace(blank, tab, newline) it encounters.
 * 
 * The string constant "x" is not the same as the character constant 'x'. One difference is that 'x' is a basic type,
 * but "x" is a derived type, an array of char. A second difference is that "x" really consists of two characters, 'x'
 * and '\0', the null character.
*/