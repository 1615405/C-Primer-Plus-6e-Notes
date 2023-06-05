#include <stdio.h>

int main(void)
{
    const float KM_PER_MILE = 1.609;
    const float LT_PER_GALLON = 3.785;
    float miles_travelled, gallons_gas_consumed, miles_per_gallon, liters_per_100km;

    printf("Enter your distance travelled in miles: ");
    scanf("%f", &miles_travelled);
    printf("Enter the amount of gas consumed in gallons: ");
    scanf("%f", &gallons_gas_consumed);

    miles_per_gallon = miles_travelled / gallons_gas_consumed;
    liters_per_100km = 100. / miles_per_gallon * LT_PER_GALLON / KM_PER_MILE;

    printf("Miles per gallon: %.1f\n", miles_per_gallon);
    printf("Liters per 100 kilometers: %.1f\n", liters_per_100km);

    return 0;
}