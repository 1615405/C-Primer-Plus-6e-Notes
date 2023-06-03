#include <stdio.h>

int main(void)
{
    int count = 0;

    while (getchar() != EOF) {
        count++;
    }
    printf("character count: %d\n", count);

    return 0;
}