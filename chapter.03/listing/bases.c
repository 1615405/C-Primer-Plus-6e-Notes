/* bases.c -- prints 100 in decimal, octal, and hex */

#include <stdio.h>

int main()
{
    int x = 100;
    
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}
/**
 * Note that the 0 and the 0x prefixes are not displayed in the output unless you include the # as part of the specifier
*/