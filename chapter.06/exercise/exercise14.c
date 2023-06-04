#include <stdio.h>

int main(void)
{
    int int_array[8], cumulative_sum[8];
    int sum = 0;

    printf("Enter 8 integers:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &int_array[i]);
        sum += int_array[i];
        cumulative_sum[i] = sum;
    }
    printf("\n");
    printf("      Integers:");
    for (int i = 0; i < 8; i++) {
        printf("%6d ", int_array[i]);
    }
    printf("\n");
    printf("Cumulative sum:");
    for (int i = 0; i < 8; i++) {
        printf("%6d ", cumulative_sum[i]);
    }
    printf("\n");

    return 0;
}