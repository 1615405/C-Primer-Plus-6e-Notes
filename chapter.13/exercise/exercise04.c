#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;

    if (argc == 1) {
        fprintf(stderr, "Usage: %s file1 file2 ...\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    for (int i = 1; i < argc; i++) {
        if ((fp = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "Could not open file %s.\n", argv[i]);
            exit(EXIT_FAILURE);
        }
        while ((ch = getc(fp)) != EOF) {
            putc(ch, stdout);
        }
        putchar('\n');
        fclose(fp);
    }

    return 0;
}