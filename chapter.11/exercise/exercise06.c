#include <stdio.h>

#define LIMIT 10

int is_within(char, const char *);
char *s_gets(char *, int);

int main(void)
{
    char string[LIMIT];
    char ch;
    while (s_gets(string, LIMIT) && string[0] != '\n') {
        ch = getchar();
        if (is_within(ch, string)) {
            puts("Yes");
        } else {
            puts("No");
        }

        while ((ch = getchar()) != '\n') {
            continue;
        }
    }

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') {
            st[i] = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}

int is_within(char ch, const char *string)
{
    while (*string) {
        if (*string == ch) {
            return 1;
        }
        string++;
    }
    return 0;
}