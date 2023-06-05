/* pizza.c -- uses defined constants in a pizza context */

#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float radius;
    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    float area = PI * radius * radius;
    float circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("ciucumference = %1.2f, area = %1.2f\n", circum, area);

    return 0;
}