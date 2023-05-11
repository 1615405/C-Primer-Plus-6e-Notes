/* typesize.c -- prints out type sizes */

#include <stdio.h>

int main(void)
{
    /* C99 provides a %zd specifier for sizes */
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n",
        sizeof(long long));
    printf("Type double has a size of %zd bytes.\n",
        sizeof(double));
    printf("Type long double has a size of %zd bytes.\n",
        sizeof(long double));
    return 0;
}


/**
 * Including the complex.h header files lets you substitute the word complex for _Complex and the word imaginary for
 * _Imaginary, and it allows you to use the symbol I to represent the square root of -1.
 * 
 * Note that the size of char is necessarily 1 byte because C defines the size of 1 byte in terms of char. So, on a
 * system a 16-bit char and a 64-bit double, sizeof will report double as having a size of 4 bytes.
 * 
 * Incidentally, notice in the last few lines how a printf() statement can be spread over two lines. You can do this as
 * long as the break does not occur in the quoted section or in the middle of a word.
*/