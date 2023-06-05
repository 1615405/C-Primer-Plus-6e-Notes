#include <stdio.h>

int main(void)
{
    int max_count;
    int sum = 0, count = 1;

    printf("How many squares would you like to sum? ");
    scanf("%d", &max_count);
    while (count <= max_count) {
        sum += count * count;
        count++;
    }
    printf("The sum of the first %d squares is: %d\n", max_count, sum);

    return 0;
}