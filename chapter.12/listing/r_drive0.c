/* r_drive0.c -- test the rand0() function */

#include <stdio.h>

int rand0(void);

int main(void)
{    
    int count;

    for (count = 0; count < 5; count++) {
        printf("%d\n", rand0());
    }

    return 0;
}

int rand0(void)
{
    static unsigned long int next = 1;
    next = next * 1103515245 + 12345;
    return (unsigned int) (next/65536) % 32768;
}