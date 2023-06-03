#include <stdio.h>
#include <ctype.h>

int get_first(void);

int main(void)
{
    int ch;

    printf("Test program for get_first():\n");
    printf("Enter a line; you should see the first non-whitespace\n");
    printf("character echoed in the terminal:\n");

    ch = get_first();
    printf("%c\n", ch);

    return 0;
}

int get_first(void)
{
    int ch, garbage;

    do {
        ch = getchar();
    } while (isspace(ch));

    while ((garbage = getchar()) != '\n' && garbage != EOF) {
        continue;
    }

    return ch;
}