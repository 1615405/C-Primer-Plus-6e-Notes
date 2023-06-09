#include <stdio.h>
#include <stdbool.h>

void flush_input_buffer(void);

int main(void)
{
    bool prime_flag;
    int limit;
    printf("Primes: this program prints all primes less than or equal to any positive integer.\n");
    printf("Enter a positive integer: \n");
    while (scanf("%d", &limit) != 1 || limit < 1) {
        flush_input_buffer();
        printf("Enter a positive integer: \n");
    }

    for (int i = 2; i <= limit; i++) {
        prime_flag = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime_flag = false;
                break;
            }
        }
        if (prime_flag) {
            printf("%d is prime.\n", i);
        }
    }

    return 0;
}

void flush_input_buffer(void)
{
    while (getchar() != '\n') {
        continue;
    }
}