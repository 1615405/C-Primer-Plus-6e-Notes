#include <stdio.h>

void print_spaces(unsigned int n);

int main(void)
{
    char uppercase_letter, c1, c2;

    do {
        printf("Enter an uppercase letter: ");
        scanf(" %c", &uppercase_letter);
    } while (uppercase_letter < 'A' || uppercase_letter > 'Z');

    for (c1 = 'A'; c1 <= uppercase_letter; c1++) {
        print_spaces(uppercase_letter - c1);
        for (c2 = 'A'; c2 < c1; c2++) {
            printf("%c", c2);
        }
        for (; 'A' <= c2; c2--) {
            printf("%c", c2);
        }
        print_spaces(uppercase_letter - c1);
        printf("\n");
    }
    
    return 0;
}

void print_spaces(unsigned int n)
{
    for (int i = 0; i < n; i++) {
        printf(" ");
    }
}