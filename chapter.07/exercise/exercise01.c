#include <stdio.h>

#define STOP '#'

int main(void)
{
    char ch;
    unsigned int spaces = 0, newlines = 0, other = 0;
    printf("Enter input (%c to stop):\n", STOP);
    while ((ch = getchar()) != STOP) {
        if (ch == ' ') {
            spaces++;
        } else if (ch == '\n') {
            newlines++;
        } else {
            other++;
        }
    }

    printf("Character Count:\n");
    printf("----------------\n");
    printf("Spaces: %u, Newlines: %u, Other: %u\n", spaces, newlines, other);

    return 0;
}