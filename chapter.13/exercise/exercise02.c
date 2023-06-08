#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ch;
    FILE * source;
    FILE * dest;

    if (argc != 3) {
        printf("Usage: %s source_file destination_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((source = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Could not open file %s for read\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((dest = fopen(argv[2], "wb")) == NULL) {
        fprintf(stderr, "Could not open file %s for write\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(source)) != EOF) {
        putc(ch, dest);
    }

    fclose(source);
    fclose(dest);

    return 0;
}