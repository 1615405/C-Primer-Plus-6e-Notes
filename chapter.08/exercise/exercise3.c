#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int uppercase_count = 0, lowercase_count = 0, other_count = 0;

    while ((ch = getchar()) != EOF) {
        if (isupper(ch)) {
            uppercase_count++;
        } else if (islower(ch)) {
            lowercase_count++;
        } else {
            other_count++;
        }
    }

    printf("Character Count\n");
    printf("Uppercase letters: %d\n", uppercase_count);
    printf("Lowercase letters: %d\n", lowercase_count);
    printf("Other: %d\n", other_count);

    return 0;
}