#include <stdio.h>

#define STOP '#'

int main(void)
{
    char ch;

    printf("Enter input (%c to exit):\n", STOP);
    while ((ch = getchar()) != STOP) {
        switch (ch) {
            case '.':
                printf("!");
                break;
            case '!':
                printf("!!");
                break;
            default:
                printf("%c", ch);
                break;
        }
    }

    return 0;
}