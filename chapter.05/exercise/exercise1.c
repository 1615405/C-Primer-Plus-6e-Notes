#include <stdio.h>

const int MINUTES_PER_HOUR = 60;

int main(void)
{
    int minutes;

    printf("Enter an amount of time in minutes: ");
    scanf("%d", &minutes);

    while (minutes > 0) {
        printf("%d minute(s) is %d hour(s) and %d minute(s)\n",
            minutes, minutes / MINUTES_PER_HOUR, minutes % MINUTES_PER_HOUR);
        
        printf("Enter an amount of time in minutes: ");
        scanf("%d", &minutes);
    }

    return 0;
}