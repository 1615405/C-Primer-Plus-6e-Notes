/*
> C Primer Plus Sixth Edition

> Chapter 2 Exercise 3:

> Write a program that converts your age in years to days and displays both values. At this
point, don't worry about fractional years and leap years.
*/


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