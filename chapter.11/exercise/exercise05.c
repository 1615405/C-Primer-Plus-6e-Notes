#include <stdio.h>

#define LIMIT 10

char *findchar(char *str, const char ch);

int main(void)
{
    char string[LIMIT];
    char *chloc;
    char ch;

    while (fgets(string, LIMIT, stdin) && *string != '\n') {
        ch = getchar();
        chloc = findchar(string, ch);
        if (chloc == NULL) {
            printf("character %c not found in %s\n", ch, string);
        } else {
            printf("character %c found at index %lu in %s\n", ch, chloc - string, string);
        }
        while ((ch = getchar()) != '\n') {
            continue;
        }
    }

    puts("Bye");

    return 0;
}

char *findchar(char *str, const char ch)
{
    while (*str != '\0') {
        if (*str == ch) {
            return str;
        }
        str++;
    }
    return NULL;
}