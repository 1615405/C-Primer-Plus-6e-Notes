#include <stdio.h>

int main(void)
{
    const int DAYS_PER_WEEK = 7;
    int days;

    printf("Enter a number of days (or enter 0 to quit): ");
    scanf("%d", &days);

    while (days > 0) {
        printf("%d days are %d week(s), %d day(s).\n", days, days / DAYS_PER_WEEK, days % DAYS_PER_WEEK);
        printf("Enter a number of days (or enter 0 to quit): ");
        scanf("%d", &days);
    }

    return 0;
}