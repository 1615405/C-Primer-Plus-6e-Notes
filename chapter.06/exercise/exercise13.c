#include <stdio.h>

int main(void)
{
    int powers_of_2[8];
    int power = 1;
    int i;

    for (int i = 0; i < 8; i++) {
        power *= 2;
        powers_of_2[i] = power;
    }
    printf("Powers of 2:\n");
    i = 0;
    do {
        printf("%d ", powers_of_2[i]);
        i++;
    } while (i < 8);

    printf("\n");

    return 0;
}