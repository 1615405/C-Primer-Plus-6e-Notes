/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 6 Exercise 11:
 * 
 * Write a program that reads eight integers into an array and then prints them in
 * reverse order.
*/


#include <stdio.h>

int main(void)
{
    int int_array[8];
    int i; // array index

    printf("Enter 8 integers:\n");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &int_array[i]);
    }
    for (i--; i >= 0; i--)
    {
        printf("%d", int_array[i]);
    }
    printf("\n");

    return 0;
}