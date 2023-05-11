/* sizeof.c -- uses sizeof operator */

#include <stdio.h>

int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);

    return 0;
}


/**
 * The sizeof operator returns the size, in bytes, of its operand. A C byte is defined as the size used by the char
 * type. The operand can be a specific data object, such as the name of a variable, or it can be a type. If it is a
 * type, such as float, the operand must be enclosed in parentheses.
 * 
 * C says that sizeof returns a value of type size_t;
 * 
 * C99 goes a step further and supplies %zd as a printf() specifier for displaying a size_t value.
*/