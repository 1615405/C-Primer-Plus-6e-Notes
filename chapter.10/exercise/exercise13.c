#include <stdio.h>

#define ROWS 3
#define COLUMNS 5

double compute_row_average(double array[COLUMNS]);
double compute_array_average(double (*array)[COLUMNS], int rows);
double largest_value(double (*array)[COLUMNS], int rows);

int main(void)
{
    double data[ROWS][COLUMNS];

    for (int i = 0; i < ROWS; i++) {
        printf("Enter set of %d doubles: ", COLUMNS);
        for (int j = 0; j < COLUMNS; j++)
        {
            scanf("%lf", data[i] + j);
        }
    }

    printf("Row Averages:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("\tAverage for row %d: %.3f\n", i + 1, compute_row_average(data[i]));
    }

    printf("Average for entire array: %.3f\n", compute_array_average(data, ROWS));

    printf("Maximum array value: %.3f\n", largest_value(data, ROWS));

    return 0;
}

double compute_row_average(double array[COLUMNS])
{
    double total = 0;
    for (int i = 0; i < COLUMNS; i++) {
        total += array[i];
    }
    return total / COLUMNS;
}

double compute_array_average(double (*array)[COLUMNS], int rows)
{
    double total = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            total += array[i][j];
        }
    }
    return total / (rows * COLUMNS);
}

double largest_value(double (*array)[COLUMNS], int rows)
{
    double dmax = array[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            if (array[i][j] > dmax)
                dmax = array[i][j];
        }
    }
    return dmax;
}