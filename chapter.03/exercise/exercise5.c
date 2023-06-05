#include <stdio.h>

int main(void)
{
    const unsigned int SECONDS_PER_YEAR = 31560000;
    unsigned int age;

    printf("What is your age (in years)?: ");
    scanf("%u", &age);
    printf("You are %u seconds old!\n", SECONDS_PER_YEAR * age);

    return 0;
}