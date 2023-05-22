/* chcount.c -- use the logical AND operator */

#include <stdio.h>
#define PERIOD '.'

int main(void)
{
    char ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '"' && ch != '\'')
            charcount++;
    }
    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}


/**
 * The logical operators have a lower precedence than the relational operators, so it is not necessary to use additional
 * parentheses to group the subexpressions.
 * 
 * C guarantees that logical expressions are evaluated from left to right. The && and || operators are sequence points,
 * so all side effects take place before a program moves from one operand to the next. Futhermore, it guarantees that 
 * as soon as an element is found that invalidates the expression as a whole, the evaluations stops.
 * 
 * Logical operators normally take relational expressions as operands. The ! operator takes one operand.
 * 
 * expression1 && expression2 is true if and only if both expressions are true. expression1 || expression2 is true if 
 * either one or both expressions are true. !expression is true if the expression is false, and vice cersa.
 * 
 * Logical expressions are evaluated from left to right. Evaluation stops as soon as something is discovered that 
 * renders the expression false.
*/