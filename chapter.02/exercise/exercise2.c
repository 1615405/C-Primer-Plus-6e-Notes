/*
C Primer Plus Sixth Edition

> Chapter 2 Exercise 2:

> Write a program to print your name and address.
*/

#include <stdio.h>

int main(void)
{
    char name[] = "John HO";
    char address[] = "Shanghai";

    printf("my name is %s , Address is %s .\n", name, address);

    return 0;
}