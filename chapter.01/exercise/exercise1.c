/* 
C Primer Plus Sixth Edition

> Chapter 1 Exercise 1:

> You have just been employed by MacroMuscle,inc.(SoftWare for Hard Bodies). The company is entering the European
market and wants a program that converts inches to centimeters(1 inch = 2.54cm).The company wants the program
set up so that it prompts the user to enter an inch value. Your assignments is to define the program objectives
and to design the program.
*/


#include<stdio.h>

const double INCH_PER_CEREMETER = 2.54;

int main(void)
{
    int inch;
    scanf("%d", &inch);

    float ceremeter;
    ceremeter = INCH_PER_CEREMETER * inch;
    printf("%.2f\n", ceremeter);
    return 0;
}