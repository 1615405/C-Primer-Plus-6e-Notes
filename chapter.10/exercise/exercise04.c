#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int index_of_max(double *arr, int arr_size);

int main(void)
{
    double test[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        test[i] = rand() / (double) RAND_MAX;
    }
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", test[i]);
    }
    putchar('\n');
    printf("The maximum value occurs at index %d\n", index_of_max(test, SIZE));

    return 0;
}

int index_of_max(double *arr, int arr_len)
{
    int indice_of_max = 0;
    for (int i = 1; i < arr_len; i++) {
        if (*(arr + i) > *(arr + indice_of_max)) {
            indice_of_max = i;
        }
    }
    return indice_of_max;
} 