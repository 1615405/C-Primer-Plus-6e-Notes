/*
> C Primer Plus Sixth Edition

> Chapter 2 Exercise 4:

>  Write a program that produces the following output:
For he's a jolly good fellow!
For he's a jolly good fellow!
For he's a jolly good fellow!
Which nobody can deny!

Have the program use two user-defined functions in addition to main(): one named
jolly() that prints the "jolly good" message once, and one named deny() that prints
the final line once.
*/


#include <stdio.h>
  
void jolly(void);
void deny(void);

int main(void)
{
    for (int i = 1; i <= 3; i++) {
        jolly();
    }
    deny();

    return 0;
}

void jolly(void)
{
    printf("For He's a jolly good fellow!\n");
}

void deny(void)
{
    printf("which nobody can deny!\n");
}