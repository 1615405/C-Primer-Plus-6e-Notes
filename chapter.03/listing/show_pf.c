/* show_pf.c -- displays float value in two ways */

#include <stdio.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);
    // next line requires C99 or later compliance
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}

/**
 * By default, the compiler assumes floating-point constants are double precision.
 * 
 * C enables you to override this default by using an f or F suffix to make the compiler treat a floating-point constant
 * as type float; An l or L suffix makes a number type long double.If the floating-point number has no suffix, it is
 * type double.
 * 
 * The printf() function uses the %f format specifier to print type float and double numbers using decimal notation,
 * and it uses %e to print them in exponential notation. Note that both float and double use the %f, %e or %a specifier
 * for output. That's because C auto-matically expands type float values to type double when they are passed as 
 * arguments to any function.
 * 
 * Now c specifies that toobig gets assigned a special value that stands for infinity and that printf() displays either
 * inf or infinity for the value.
*/