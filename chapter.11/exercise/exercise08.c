#include <stdio.h>

#define LIMIT 50

char *string_in(char *, char *);
char *get(char *, int n);

int main(void)
{
    char string[LIMIT];
    char substring[LIMIT];
    while (get(string, LIMIT) && string[0] != '\0') {
        get(substring, LIMIT);
        char *substr_loc = string_in(string, substring);
        if (substr_loc) {
            printf("%s found in %s at index %lu\n", substring, string, substr_loc - string);
        } else {
            puts("No");
        }
    }
    
    return 0;
}

char *get(char *string, int n)
{
    char *ret_val = fgets(string, n, stdin);
    while (*string) {
        if (*string == '\n') {
            *string = '\0';
            break;
        }
        string++;
    }

    return ret_val;
}

char *string_in(char *string, char *substring)
{
    int i;
    while (*string) {
        i = 0;
        while (*(string + i) == *(substring + i)) {
            i++;
            if (*(substring + i) == '\0') {
                return string;
            }
        }
        string++;
    }

    return NULL;
}