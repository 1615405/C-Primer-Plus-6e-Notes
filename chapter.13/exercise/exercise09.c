#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

char *s_gets(char *, int, FILE *);

int main(void)
{
    FILE * fp;
    char words[MAX];
    char line[MAX + 6];
    int word_count = 1;

    if ((fp = fopen("wordy", "a+")) == NULL) {
        fprintf(stderr, "Could not open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }

    rewind(fp);
    while (s_gets(line, MAX + 6, fp) != NULL) {
        word_count++;
    }

    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) {
        fprintf(fp, "%d %s\n", word_count++, words);
    }

    rewind(fp);

    while (s_gets(line, MAX + 6, fp) != NULL) {
        fputs(line, stdout);
    }
    putchar('\n');
    puts("Done!");

    if (fclose(fp) != 0) {
        fprintf(stderr, "Error closing file.\n");
    }

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