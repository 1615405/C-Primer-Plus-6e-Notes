/* dyn_arr.c -- dynamically allocated array */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int max, number;
    int i = 0;

    puts("What's the maximum number of type double entries?");
    if (scanf("%d", &max) != 1) {
        puts("Number not correctly entered -- bye.");
        exit(EXIT_FAILURE);
    }
    double *ptd = (double *) malloc (max * sizeof(double));
    if (ptd == NULL) {
        puts("Memory allocation failed, Goodbye.");
        exit(EXIT_FAILURE);
    }

    puts("Enter the values (q to quit):");
    while (i < max && scanf("%lf", &ptd[i]) == 1) {
        ++i;
    }
    printf("Here are your %d entries:\n", number = i);
    for (i = 0; i < number; i++) {
        printf("%7.2f ", ptd[i]);
        if (i % 7 == 6) {
            putchar('\n');
        }
    }
    putchar('\n');
    puts("Done.");
    free(ptd);

    return 0;
}