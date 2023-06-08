#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SLEN 81

void s_gets(char *, int);

int main(void)
{
    int ch;
    FILE * source;
    FILE * dest;
    char src[SLEN], dst[SLEN];

    s_gets(src, SLEN);
    s_gets(dst, SLEN);

    if ((source = fopen(src, "r")) == NULL) {
        fprintf(stderr, "Could not open the %s file\n", src);
        exit(EXIT_FAILURE);
    }
    if ((dest = fopen(dst, "w")) == NULL) {
        fprintf(stderr, "could not write the %s file.\n", dst);
    }

    while ((ch = getc(source)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        putc(ch, dest);
    }

    fclose(source);
    fclose(dest);

    return 0;
}

void s_gets(char *string, int n)
{
    fgets(string, n, stdin);
    while (*string) {
        if (*string == '\n') {
            *string = '\0';
            break;
        }
        string++;
    }
}