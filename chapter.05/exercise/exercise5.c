#include <stdio.h>

int main(void)
{
    int max_count;
    int sum = 0, count = 1;

    printf("How many integers would you like to sum? ");
    scanf("%d", &max_count);
    while (count <= max_count) {
        sum += count;
        count++;
    }
    printf("sum = %d\n", sum);

    return 0;
}