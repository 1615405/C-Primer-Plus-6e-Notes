/* strptr.c -- strings are pointers */

#include <stdio.h>

int main(void)
{
    printf("%s, %p, %c\n", "we", "are", *"space farers");

    return 0;
}