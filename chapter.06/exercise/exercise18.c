#include <stdio.h>

int main(void)
{
    const int DUNBARS_NUMBER = 150;

    int friends = 5, week = 0;

    printf("Week | Friends\n");
    printf("-----+--------\n");
    while (friends < DUNBARS_NUMBER) {
        printf("%4d | %7d\n", week, friends);
        week++;
        friends -= week;
        friends *= 2;
    }

    return 0;
}