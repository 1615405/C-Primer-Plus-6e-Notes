#include <stdio.h>

#define ROWS 3
#define COLUMNS 5

double compute_row_average(double *array, int cols);
double compute_array_average(int rows, int cols, double array[][cols]);
double largest_value(int rows, int cols, double array[][cols]);

int main(void)
{
    double data[ROWS][COLUMNS];

    for (int i = 0; i < ROWS; i++) {
        printf("Enter set of %d doubles: ", COLUMNS);
        for (int j = 0; j < COLUMNS; j++) {
            scanf("%lf", data[i] + j);
        }
    }

    // print row averages
    printf("Row Averages:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("\tAverage for row %d: %.3f\n", i + 1, compute_row_average(data[i], COLUMNS));
    }

    printf("Average for entire array: %.3f\n", compute_array_average(ROWS, COLUMNS, data));

    printf("Maximum array value: %.3f\n", largest_value(ROWS, COLUMNS, data));

    return 0;
}

double compute_row_average(double *array, int cols)
{
    double total = 0;
    for (int i = 0; i < cols; i++) {
        total += array[i];
    }
    return total / cols;
}

double compute_array_average(int rows, int cols, double array[rows][cols])
{
    double total = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total += array[i][j];
        }
    }
    return total / (rows * cols);
}

double largest_value(int rows, int cols, double array[rows][cols])
{
    double dmax = array[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] > dmax)
                dmax = array[i][j];
        }
    }
    return dmax;
}