/* skip2.c -- skips over first two integers of input */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    return 0;
}


/**
 * The * severs quite a different purpose for scanf(). When placed between the % and the specifier letter, it causes
 * that function to skip over corresponding input.
 * 
 * Whitespace characters(tabs, spaces, and newlines) play a critical role in how scanf() views input. Except when in
 * the %c mode(which reads just the next character), scanf() skips over whitespaces to the first non-whitespace 
 * character when reading input. It then keeps reading characters either until encountering whitespace or until 
 * encountering a character that doesn't fit the type being read. 
*/