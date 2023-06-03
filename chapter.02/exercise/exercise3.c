#include <stdio.h>

int main(void)
{
    int age, days;
    const int ONE_YEAR = 365;

    printf("please input your age : \n");
    scanf("%d", &age);
    days = age * ONE_YEAR;
    printf("you live %d days\n", days);
    
    return 0;
}