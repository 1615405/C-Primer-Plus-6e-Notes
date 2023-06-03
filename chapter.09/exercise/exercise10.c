#include <stdio.h>

void to_base_n(int integer, int base);

int main(void)
{
    int integer, base;
    printf("Test to_base_n() function\n");
    while (scanf("%d %d", &integer, &base) == 2) {
        to_base_n(integer, base);
        putchar('\n');
    }

    return 0;
}

void to_base_n(int integer, int base)
{
    if (base < 2 || base > 10) {
        printf("Error: base must be between 2 ans 10.\n");
        return;
    }

    if (integer < 0) {
        putchar('-');
        integer = -integer;
    }
    if (integer >= base) {
        to_base_n(integer / base, base);
    }
    printf("%d", integer % base);
    return;
}