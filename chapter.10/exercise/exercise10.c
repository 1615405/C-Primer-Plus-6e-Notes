#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void add_arrays(int *addend1, int *addend2, int *sum, int array_length);

int main(void)
{
    srand(time(NULL));

    int array1[SIZE];
    int array2[SIZE];
    int sum[SIZE];

    for (int i = 0; i < SIZE; i++) {
        array1[i] = rand() % 20;
        array2[i] = rand() % 20;
    }

    add_arrays(array1, array2, sum, SIZE);

    printf("%8s %8s %8s\n", "Array 1", "Array 2", "Sum");
    for (int i = 0; i < SIZE; i++) {
        printf("%8d %8d %8d\n", array1[i], array2[i], sum[i]);
    }
    
    return 0;
}

void add_arrays(int *addend1, int *addend2, int *sum, int array_length)
{
    for (int *tar = sum; tar < sum + array_length; tar++, addend1++, addend2++) {
        *tar = *addend1 + *addend2;
    }
}