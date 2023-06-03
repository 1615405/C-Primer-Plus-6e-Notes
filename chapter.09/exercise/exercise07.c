#include <stdio.h>
#include <ctype.h>

int letter_location(char ch);

int main(void)
{
    char ch;
    int location;

    while ((ch = getchar()) != EOF) {
        if ((location = letter_location(ch)) == -1) {
            printf("%c is not a letter.\n", ch);
        } else {
            printf("%c is a letter: location = %d\n", ch, location);
        }
        while ((ch = getchar()) != '\n') {
            continue;
        }
    }

    return 0;
}

int letter_location(char ch)
{
    if (isalpha(ch)) {
        ch = tolower(ch);
        return ch - 'a' + 1;
    }
    return -1;
}