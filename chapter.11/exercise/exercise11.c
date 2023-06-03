#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define COUNT 10
#define LIMIT 50

void sort_ASCII(char *strings[], int n);
void sort_length(char *strings[], int n);
int fwlen(char *string);
void sort_firstword_length(char *strings[], int n);
char *get(char *string, int n);
void print_menu(void);

int main(void)
{
    char strings[COUNT][LIMIT];
    char *strptrs[COUNT];
    char ch;

    for (int i = 0; i < COUNT; i++) {
        char *success = get(strings[i], LIMIT);
        if (success == NULL) {
            break;
        }
    }

    for (int i = 0; i < COUNT; i++) {
        strptrs[i] = strings[i];
    }

    print_menu();
    while ((ch = getchar()) != 'q') {
        while (getchar() != '\n') {
            continue;
        }
        switch(ch) {
            case 'a':
                sort_ASCII(strptrs, COUNT);
                break;
            case 'l':
                sort_length(strptrs, COUNT);
                break;
            case 'f':
                sort_firstword_length(strptrs, COUNT);
                break;
            case 'o':
                break;
            default:
                printf("Invalid input, Try again!");
                print_menu();
                continue;
        }

        putchar('\n');
        for (int i = 0; i < COUNT; i++) {
            puts(strptrs[i]);
        }
    }

    puts("Bye.");

    return 0;
}

void sort_ASCII(char *strings[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                char *temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}

void sort_length(char *strings[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(strings[i]) > strlen(strings[j])) {
                char *temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}

int fwlen(char *string)
{
    int len = 0;
    while (isspace(*string)) {
        string++;
    }

    while (!isspace(*string)) {
        len++;
        string++;
    }

    return len;
}

void sort_firstword_length(char *strings[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (fwlen(strings[i]) > fwlen(strings[j])) {
                char *temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}

char *get(char *string, int n)
{
    char *ret_val = fgets(string, n, stdin);

    while (*string) {
        if (*string == '\n') {
            *string = '\0';
            break;
        }
        string++;
    }

    return ret_val;
}

void print_menu(void)
{
    puts("Choose an option:");
    puts("(o) Print strings in original order.");
    puts("(a) Print strings in ASCII collating sequence.");
    puts("(l) Print strings ordered by length.");
    puts("(f) Print strings ordered by length of the first word.");
    puts("(q) Quit.");
    puts("");
    puts("Enter a character: ");
}