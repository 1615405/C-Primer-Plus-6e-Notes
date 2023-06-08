#include <stdio.h>
#include <stdlib.h>

#define SLEN 81

void get(char *string, int n);

int main(void)
{
    FILE *fp;
    char filename[SLEN];
    long pos;
    int ch;

    get(filename, SLEN);

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Could not open file %s.\n", filename);
        exit(EXIT_FAILURE);
    }

    while (scanf("%ld", &pos) == 1) {
        if (pos < 0) {
            break;
        }
        fseek(fp, pos, SEEK_SET);
        while ((ch = getc(fp)) != EOF && ch != '\n') {
            putchar(ch);
        }
        putchar('\n');
    }

    fclose(fp);

    return 0;
}

void get(char *string, int n)
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