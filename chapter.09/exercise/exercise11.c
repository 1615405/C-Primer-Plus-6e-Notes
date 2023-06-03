#include <stdio.h>

long Fibonacci(long n);

int main(void)
{
    long n;
    printf("Test Fibonacci() function\n");

    while (scanf("%ld", &n) == 1) {
        printf("Fibonacci #%ld = %ld\n", n, Fibonacci(n));
    }

    return 0;
}

long Fibonacci(long n)
{
    if (n < 1) {
        printf("Error: n must be a positive integer.\n");
        return -1;
    }

    if (n == 1)  return 1;
    if (n == 2)  return 1;

    long fib_n1 = 1, fib_n2 = 1, fib_n;

    for (long i = 3; i <= n; i++) {
        fib_n = fib_n1 + fib_n2;
        fib_n1 = fib_n2;
        fib_n2 = fib_n;
    }

    return fib_n;
}