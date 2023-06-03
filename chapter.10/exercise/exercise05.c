#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

double max_diff(double *, int);

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
    printf("The diff between the largest and smallest is %.2f\n", max_diff(test, SIZE));

    return 0;
}

double max_diff(double *arr, int arr_len)
{
    double dmax = arr[0];
    double dmin = arr[0];

    for (int i = 1; i < arr_len; i++) {
        if (arr[i] > dmax) {
            dmax = arr[i];
        }
        if (arr[i] < dmin) {
            dmin = arr[i];
        }
    }

    return dmax - dmin;
}