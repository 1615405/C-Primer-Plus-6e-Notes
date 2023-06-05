#include <stdio.h>

int main(void)
{
    const double INCH_PER_CEREMETER = 2.54;
    int inch;
    scanf("%d", &inch);

    float ceremeter = INCH_PER_CEREMETER * inch;
    printf("%.2f\n", ceremeter);
    return 0;
}