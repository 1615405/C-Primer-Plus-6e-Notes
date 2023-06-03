#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 20

char *getword(char *target, int n);

int main(void)
{
    char hello[SIZE] = "Hello, ";
    getword(hello + 7);
    puts(hello);

    return 0;
}

char *getword(char *target, int n)
{
    char ch;
    int i = 0;
    bool inword = false;

    while ((ch = getchar()) != EOF && i < n) {
        if (isspace(ch)) {
            if (inword) {
                break;
            } else {
                continue;
            }
        }

        if (!inword) {
            inword = true;
        }
        *(target + i) = ch;
        i++;
    }

    while ((ch = getchar()) != '\n') {
        continue;
    }

    return target;
}