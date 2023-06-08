#include <stdio.h>
#include <stdlib.h>

#define LLEN 70

void s_gets(char *, int, FILE *);

int main(int argc, char *argv[])
{
    FILE *file1, *file2;
    char temp[LLEN];
    int ch;

    if (argc < 3) {
        printf("Usage : %s file1 file2\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((file1 = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Could not open file %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((file2 = fopen(argv[2], "r")) == NULL) {
        fprintf(stderr, "Could not open file %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while (1) {
        s_gets(temp, LLEN, file1);
        printf("%-*s\n", LLEN, temp);
        s_gets(temp, LLEN, file2);
        if (feof(file1) && feof(file2)) {
            break;
        }
    }

    return 0;
}

void s_gets(char *string, int n, FILE *file)
{
    fgets(string, n, file);

    while (*string) {
        if (*string == '\n') {
            *string = '\0';
            break;
        }
        string++;
    }
}