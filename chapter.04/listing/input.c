/* input.c -- when to use & */

#include <stdio.h>

int main(void)
{
    int age;         // variables
    float assets;    // variables
    char pet[30];    // string

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);    // use the & here
    scanf("%s", pet);                 // no & for char array
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}


/**
 * If you want to store that as a numerical value rather than as a string, your program has to convert the string 
 * character-by-character to a numerical value; that is what scanf() does! It converts string input into various forms:
 * integers, floating-point numbers, characters, and C strings. It is the inverse of printf(), which converts integers,
 * floating-point numbers, characters, C strings to text that is to be displayed onscreen.
 * 
 * The printf() function use variable name, constants, and expressions. The scanf() function uses pointers to variables.
 * 
 * The scanf() function uses whitespace(newlines, tabs, and spaces) to decide how to divide the input into the separate
 * fields. The only exception to this is the %c specification, which reads the very next character, even if the 
 * character is whitespace.
 * 
 * The main difference is that printf() use %f, %e, %E, %g, and %G for both type float and type double, whereas scanf() 
 * uses them just for type float, requiring the l modifier for double.
*/