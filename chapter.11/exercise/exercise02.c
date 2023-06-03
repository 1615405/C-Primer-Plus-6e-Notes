#include <stdio.h>
#include <string.h>

#define SIZE 20

char *sgetnchar(char *, int);

int main(void)
{
    char hello[SIZE] = "Hello, ";
    int space = SIZE - strlen(hello) - 1;

    sgetnchar(hello + 7, space);
    puts(hello);

    return 0;
}

char *sgetnchar(char *array, int n)
{
    int i = 0;
    char ch;

    while ((ch = getchar()) != EOF && !isspace(ch) && i < n) {
        *(array + i) = ch;
        i++;
    }

    return array;
}