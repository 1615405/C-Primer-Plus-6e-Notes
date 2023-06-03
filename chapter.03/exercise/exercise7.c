#include <stdio.h>

int main(void)
{
    const float CM_PER_INCH = 2.54;
    float height;

    printf("Enter your height (in inches): ");
    scanf("%f", &height);
    printf("You are %f centimeters tall.\n", height * CM_PER_INCH);

    return 0;
}