#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINEMAX 255

char *s_gets(char *, int, FILE *);

int main(int argc, char *argv[])
{
    FILE *fp;
    char line[LINEMAX];

    if (argc != 3) {
        fprintf(stderr, "Usgae: %s <string> <filename>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[2], "r")) == NULL) {
        fprintf(stderr, "Could not open file %s.\n");
        exit(EXIT_FAILURE);
    }

    while (s_gets(line, LINEMAX, fp) != NULL) {
        if (strstr(line, argv[1]) != NULL) {
            fputs(line, stdout);
        }
    }

    fclose(fp);
    return 0;
}

char *s_gets(char *string, int n, FILE *file)
{
    char *ret_val = fgets(string, n, file);
    if (ret_val) {
        while (*string) {
            if (*string == '\n') {
                *string = '\0';
                break;
            }
            string++;
        }
    }
    return ret_val;
}