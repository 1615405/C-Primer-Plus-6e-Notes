#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    char ch;
    int upper = 0, lower = 0, punct = 0, digits = 0, words = 0;
    bool inword = false;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            if (!inword) {
                inword = true;
                words++;
            }
            if (isupper(ch)) {
                upper++;
            }
            if (islower(ch)) {
                lower++;
            }
        } else if (isdigit(ch)) {
            digits++;
            inword = false;
        } else if (ispunct(ch)) {
            punct++;
            if (ch != '-' && ch != '\'') {
                inword = false;
            }
        } else if (isspace(ch)) {
            inword = false;
        }
    }

    printf("lower = %d, upper = %d, words = %d, digits = %d, punct = %d\n", lower, upper, words, digits, punct);

    return 0;
}