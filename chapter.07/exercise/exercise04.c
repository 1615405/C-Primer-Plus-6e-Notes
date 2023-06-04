#include <stdio.h>

#define STOP '#'

int main(void)
{
    char ch;

    printf("Enter input (%c to exit):\n", STOP);
    while ((ch = getchar()) != STOP) {
        if (ch == '.') {
            printf("!");
        }
        else if (ch == '!') {
            printf("!!");
        }
        else {
            printf("%c", ch);
        }
    }

    return 0;
}