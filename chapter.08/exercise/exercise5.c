#include <stdio.h>

int main(void)
{
    int upper_bound = 100;
    int lower_bound = 0;
    int guess = 50;

    char ch;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right, with a h if it's");
    printf("\ntoo high and an l if it's too low.\n");
    printf("Uh...is your number %d?\n", guess);

    while ((ch = getchar()) != 'y') {
        while (getchar() != '\n') {
            continue;
        }
        if (ch == 'h') {
            upper_bound = guess;
        } else if (ch == 'l') {
            lower_bound = guess;
        } else {
            printf("Invalid valid input, Try again.\n");
            continue;
        }
        guess = (upper_bound + lower_bound) / 2.0;
        printf("Well, then, is it %d\n", guess);
    }

    printf("I knew I could do it\n");

    return 0;
}