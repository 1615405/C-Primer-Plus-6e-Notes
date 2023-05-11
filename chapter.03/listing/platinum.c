/* platinum.c -- your weight in platinum */

#include <stdio.h>

int main(void)
{
    float weight; /* user weight         */
    float value;  /* platinum equivalent */

    printf("Are you worth your weight in platnium?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    /* get input from the user */
    scanf("%f", &weight);
    /* assume platinum is $1700 per ounce          */
    /* 14.5833 converts pounds avd. to ounces troy */
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platnium is worth $%.2f\n", value);
    printf("You are easily worth that! If platinum prices drop.\n");
    printf("eat more to maintain your value.\n");

    return 0;
}


/**
 * The %f instructs scanf() to read a floating-point number from the keyboard, and the &weight tells scanf() to read
 * assign the input value to the variable named weight.
 * 
 * Some types of data are preset before a program is used and keep their values unchanged throughout the life of the
 * program. These are constants. Other types of data may change or be assigned values as the program runs; These are
 * variables. The differences between a variable and a constant is that a variable can have its value assigned or
 * changed while the programming, and a constant can't.
 * 
 * The types created with these keywords can be divided into two families on the basic of how they are stored in the
 * computer: integer type and floating-point types.
 * 
 * Floating-point representation involves breaking up a number into a fractional part and an exponent part and storing
 * the parts separately.
*/