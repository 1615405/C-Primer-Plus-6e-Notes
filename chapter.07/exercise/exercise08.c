#include <stdio.h>
#include <stdbool.h>

#define RATE_1 8.75
#define RATE_2 9.33
#define RATE_3 10.00
#define RATE_4 11.20

#define OVERTIME_HOURS 40.0
#define OVERTIME_MULTIPLIER 1.5
#define TAX_RATE_1 0.15
#define TAX_BRACKET_1 300.0
#define TAX_RATE_2 0.20
#define TAX_BRACKET_2 450.0
#define TAX_RATE_3 0.25

void flush_input_buffer(void);
float calculate_gross_pay(float hours, float rate);
float calculate_taxes(float gross_pay);

int main(void)
{
    bool exit_flag = false;
    int rate_option;
    float rate, hours, gross_pay, taxes;

    while (true)
    {
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $8.75/hr 							2) $9.33/hr\n");
        printf("3) $10.00/hr 						4) $11.20/hr\n");
        printf("5) quit\n");
        printf("*****************************************************************\n");

        scanf("%d", &rate_option);
        switch (rate_option)
        {
            case 1:
                rate = RATE_1;
                break;
            case 2:
                rate = RATE_2;
                break;
            case 3:
                rate = RATE_3;
                break;
            case 4:
                rate = RATE_4;
                break;
            case 5:
                exit_flag = true;
                break;
            default:
                flush_input_buffer();
                printf("Please enter an integer between 1 and 5.\n");
                continue;
        }
        if (exit_flag)
            break;
        
        printf("Enter number of hours worked in a week: ");
        while (scanf("%f", &hours) != 1 || hours <= 0) 
        {
            flush_input_buffer();
            printf("Please enter a positive number. \n");
            printf("Enter number of hours worked in a week: ");
        }

        gross_pay = calculate_gross_pay(hours, rate);
        taxes = calculate_taxes(gross_pay);

        printf("For %.1f hours of work at $%.2f/hr, you make $%.2f and pay $%.2f in taxes.\n",
            hours, rate, gross_pay, taxes);
        printf("\n");
    }

    printf("Bye.\n");

    return 0;
}

void flush_input_buffer(void)
{
    while (getchar() != '\n')
        continue;
}

float calculate_gross_pay(float hours, float rate)
{
    if (hours > OVERTIME_HOURS)
        return OVERTIME_HOURS * rate + (hours - OVERTIME_HOURS) * rate * OVERTIME_MULTIPLIER;
    return hours * rate;
}

float calculate_taxes(float gross_pay)
{
    if (gross_pay > TAX_BRACKET_2)
        return TAX_RATE_3 * (gross_pay - TAX_BRACKET_2) + TAX_RATE_2 * (TAX_BRACKET_2 - TAX_BRACKET_1) + TAX_RATE_1 * TAX_BRACKET_1;
    else if (gross_pay > TAX_BRACKET_1)
        return TAX_RATE_2 * (gross_pay - TAX_BRACKET_1) + TAX_RATE_1 * TAX_BRACKET_1;
    return TAX_RATE_1 * gross_pay;
}