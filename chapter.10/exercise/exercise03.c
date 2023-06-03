#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int max_int(int *, int);

int main(void)
{
    int test[SIZE];

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        *(test + i) = rand() % 100;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", test[i]);
    }
    putchar('\n');
    printf("The maximum of test is %d\n", max_int(test, SIZE));

    return 0;
}

int max_int(int *arr, int arr_len)
{
    int imax = arr[0];
    for (int i = 1; i < arr_len; i++) {
        if (arr[i] > imax) {
            imax = arr[i];
        }
    }
    return imax;
}