#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROWS 20
#define COLS 30

void deglitch(int data[ROWS][COLS]);

int main(int argc, char *argv)
{
    FILE *fp;
    int data[ROWS][COLS];
    char img[ROWS][COLS];
    char ch;

    if (argc != 3) {
        printf("Usage : %s <data file> <image file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Could not open file %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (fscanf(fp, "%d", *(data + i) + j) != 1) {
                fprintf(stderr, "Invalid or corrupted data file.\n");
                exit(EXIT_FAILURE);
            }
        }
    }
    fclose(fp);

    delitch(data);

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            char ch;
            switch (data[i][j]) {
                case 0:
                    ch = ' ';
                    break;
                case 1:
                    ch = '.';
                    break;
                case 2:
                    ch = '\'';
                    break;
                case 3:
                    ch = ':';
                    break;
                case 4:
                    ch = '~';
                    break;
                case 5:
                    ch = '*';
                    break;
                case 6:
                    ch = '=';
                    break;
                case 7:
                    ch = '}';
                    break;
                case 8:
                    ch = '&';
                    break;
                case 9:
                    ch = '#';
                    break;
                default:
                    fprintf(stderr, "Error: int out of bounds.\n");
                    exit(EXIT_FAILURE);
            }
            img[i][j] = ch;
        }
        img[i][COLS] = '\0';
    }

    if ((fp = fopen(argv[2], "w")) == NULL) {
        fprintf(stderr, "Could not open file %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            putchar(img[i][j]);
            putc(img[i][j], fp);
        }
        putchar('\n');
        putc('\n', fp);
    }

    fclose(fp);

    return 0;
}

void deglitch(int data[ROWS][COLS])
{
    float total;
    int count;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            total = 0, count = 0;

            if (i + 1 < ROWS) {
                if (abs(data[i][j] - data[i + 1][j]) < 2) {
                    continue;
                }
                total += data[i + 1][j];
                count++;
            }
            
            if (j + 1 < COLS) {
                if (abs(data[i][j] - data[i][j + 1]) < 2) {
                    continue;
                }
                total += data[i][j + 1];
                count++;
            }

            if (i > 0) {
                if (abs(data[i][j] - data[i - 1][j]) < 2) {
                    continue;
                }
                total += data[i - 1][j];
                count++;
            }

            if (j > 0) {
                if (abs(data[i][j] - data[i][j - 1]) < 2) {
                    continue;
                }
                total += data[i][j - 1];
                count++;
            }

            data[i][j] = (int) rintf(total / count);
        }
    }
}