#include <stdio.h>

int main()
{
    int age, days;
    int oneYear = 365; /* 此处默认一年为365天 */

    printf("please input your age : \n");
    scanf("%d", &age);
    days = age * oneYear;
    printf("you live %d days\n", days);
    
    return 0;
}