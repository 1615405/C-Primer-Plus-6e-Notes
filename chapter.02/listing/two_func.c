/* two_func.c -- a program using two functions in one file */

#include <stdio.h>

void butler(void);  /* ANSI/ISO C fuinction prototyping */

int main()
{
    printf("I will summon the bulter function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void)   /* start of function definition */
{
    printf("You rang, sir?\n");
}