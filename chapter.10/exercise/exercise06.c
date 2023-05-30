/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 10 Exercise 6:
 * 
 * Write a function that reverses the contents of an array of double and test
 * it in a simple program.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void reverse_array(double *, double *);

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

    reverse_array(test, test + SIZE - 1);

    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", test[i]);
    }
    putchar('\n');

    return 0;
}

void reverse_array(double *arr_start, double *arr_end)
{
    while (arr_start < arr_end) {
        double tmp = *arr_end;
        *arr_end = *arr_start;
        *arr_start = tmp;

        arr_start++;
        arr_end--;
    }
}