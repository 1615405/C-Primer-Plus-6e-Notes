/* varwid.c -- uses variable-width output field */

#include <stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number is :%*d\n", width, number);
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");

    return 0;
}

/**
 * Suppose you use a %d specifier to read an integer. The scanf() function begins reading input a character at a time.
 * It skips over whitespace characters(spaces, tabs, and newlines) until it finds a non-whitespace character. Because 
 * it is attemping to read an integer, scanf() expects to find a digit character or, perhaps, a sign(+ or -). If it 
 * finds a digit or a sign, it saves that character and then reads the next character. If that is a digit, it saves the
 * digit and reads the next character. scanf() continues reading and saving characters until it encounters a nondigit.
 * It then concludes that it has reached the end of the integer. scanf() places the nondigit back into the input.
 * 
 * If you use a field width, scanf() halts at the field end or at the first whitespace, whichever comes first.
 * 
 * For instance, the %x specifier requires that scanf() recognize the hexadecimal digits a-f and A-F. Floating-point 
 * specifiers require that scanf() to recognize decimal points, e-notation, and the new p-notation.
 * 
 * If you use an %s specifier, any character other than whitespace is accpetable, so scanf() skips whitespace to the 
 * first non-whitespace character and then saves up non-whitespace characters until hitting whitespace again.
 * 
 * A final point: When scanf() places the string in the designated array, it adds the terminating '\0' to make the array
 * contains a C string.
 * 
 * If you use a %c specifier, all input characters are fair game. If the next input character is a space or a newline, 
 * a space or a newline is assigned to the indicated variable; whitespace is not skipped.
 * 
 * The command scanf("%c", &ch) reads the first character encountered in input, and scanf(" %c", ch) reads the first
 * non-whitespace character encountered.
 * 
 * The scanf() function returns the number of items that it successfully reads. If it reads no items, which happens if
 * you type a nonnumerical string when it expects a number, scanf() returns the value 0. It returns EOF when it detects
 * the condition known as "end of file".
 * 
 * Suppose that you don't want to commit yourself to a field width in advance but rather you want the program to specify
 * it. You can do this by using * instead of a number for the field width, but you slao have to add an argument to tell
 * what the field width should be.
*/