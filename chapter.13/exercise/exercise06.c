#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLEN 81

void s_gets(char *, int);

int main(void)
{
    FILE *in;
    FILE *out;
    char source[SLEN], dest[SLEN];
    int ch;
    unsigned int count = 0;

    s_gets(source, SLEN - 5);

    if ((in = fopen(source, "r")) == NULL) {
        fprintf(stderr, "Could not open file %s.\n", source);
        exit(EXIT_FAILURE);
    }

    strcpy(dest, source);
    strcat(dest, ".red");

    if ((out = fopen(dest, "w")) == NULL) {
        fprintf(stderr, "Could not write %s file.\n", dest);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(in)) != EOF) {
        if (count++ %3 == 0) {
            putc(ch, out);
        }
    }

    if (fclose(in) != 0) {
        printf("Error in closing file %s.\n", source);
    }
    if (fclose(out) != 0) {
        printf("Error in closing file %s.\n", dest);
    }

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