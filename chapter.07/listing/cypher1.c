/* cypher1.c -- alters input, preserving spaces */

#include <stdio.h>
#define SPACE ' '                // that's quote-space-quote

int main(void)
{
    char ch;

    ch = getchar();              // leave the space
    while ((ch == getchar()) != '\n')           // while not end of line
    {
        if (ch == SPACE)         // leave the space
            putchar(ch);         // character unchanged
        else
            putchar(ch + 1);     // change other characters
    } 
    putchar(ch);                 // print the newline

    return 0;
}


/**
 * The getchar() function takes no argument, and it returns the next character from input
 * 
 * The putchar() function prints its argument. Characters really are stored as integers. In the expression ch + 1, ch 
 * is expanded to type int for the calculation, and the resulting int is passed to putchar(), which takes an int 
 * argument but only uses the final type to determine which character to display.
 * 
 * Because these functions deal only with characters, they are faster and more compact than the more general scanf() and
 * printf() functions. Also, note that they don't need format specifiers; that's because they work with characters only.
 * Both functions are typically defined in the stdio.h file. Also, typically, they are preprocessor macros rather than 
 * true functions;
*/