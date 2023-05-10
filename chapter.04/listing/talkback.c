/* talkback.c -- nosy, informative program */

#include <stdio.h> 
#include <string.h>   // for strlen() prototype
#define DENSITY 62.4  // human density in 1bs per cu ft

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40];    // name is an array of 40 chars

    printf("Hi, What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);

    return 0;
}


/**
 * The double quotation marks are not part of the string. They inform the compiler that they enclose a string, just as
 * single quotation marks identify a character.
 * 
 * C has no special variable type for strings. Instead, strings are stored in an array of type char. Characters in a
 * are stored in adjacent memory cells, one character per cell, and an array consists of adjacent memory locations, so
 * placing a string in an array is quite natural.
 * 
 * The \0 is the null character, and C uses it to mark the end of a string. The null character is not the digit of zero.
 * it is the nonprinting character whose ASCII code value (or equivalent) is 0. Strings in C are always stored with this
 * terminating null character. The presence of the null character means that the array must have at least one more cell
 * than the number of characters to be stored.
*/