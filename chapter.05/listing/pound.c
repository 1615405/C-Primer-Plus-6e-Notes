/* pound.c -- define a function with an argument */

#include <stdio.h>

void pound(int n);        // ANSI function prototype declaration

int main(void)
{
    int times = 5;
    char ch = '!';        // ASCII code is 33
    float f = 6.0f;

    pound(times);         // int argument
    pound(ch);            // same as pound((int)ch)
    pound(f);             // same as pound((int)f)

    return 0;
}

void pound(int n)         // ANSI-style function header
{                         // says takes one int argument
    while (n-- > 0)
        printf("#");
    printf("\n");
}


/**
 * Variable names are private to the function. This means that a name defined in one function doesn't conflict with the
 * same name defined elsewhere.
 * 
 * A prototype is a function declaration that describes a function's return value and its arguments. This prototype says
 * two things about the pound() function.
 *     The function has no return value
 *     The function takes one argument, which is a type int value.
*/