#include<stdio.h>

const double MID = 2.54;

int main()
{
    int inch;
    scanf("%d", &inch);

    float ceremeter;
    ceremeter = MID * inch;
    printf("%.2f\n", ceremeter);
    return 0;
}