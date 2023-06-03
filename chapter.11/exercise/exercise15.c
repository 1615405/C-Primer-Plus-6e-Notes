#include <stdio.h>
#include <ctype.h>

int my_atoi(char *);

int main(int argc, char *argv)
{
    int input;

    if (argc != 2) {
        puts("Usage; <program_name> <arg_1>");
    } else {
        input = my_atoi(argv[1]);
        printf("%d\n", input);
    }

    return 0;
}

int my_atoi(char *string)
{
    int total = 0;
    while (*string) {
        if (!isdigit(*string)) {
            return 0;
        } else {
            total = total * 10 + *string;
        }
        string++;
    }

    return total;
}