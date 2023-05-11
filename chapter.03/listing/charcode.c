/* charcode.c -- displays code number for a character */

#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch); /* user inputs character */
    printf("The code for %c is %d.\n", ch, ch);

    return 0;
}


/**
 * The char type is used for storing characters such as letters and punctuation marks, but technically it is an integer
 * type. The char type actually stores integers, not characters. To handle characters, the computer uses a numerical
 * code in which certain integers represent certain characters.
 * 
 * Note that the printf() specifiers determine how data is displayed, not how it is stored.
*/