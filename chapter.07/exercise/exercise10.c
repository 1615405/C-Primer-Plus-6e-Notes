#include <stdio.h>

#define SINGLE 1
#define HEAD_OF_HOUSEHOLD 2
#define MARRIED_JOINT 3
#define MARRIED_SEPARATE 4
#define EXIT 5

#define RATE_1 0.15f
#define RATE_2 0.28f

void flush_input_buffer(void);

int main(void)
{
    int category;
    float income, bracket, taxes;

    printf("US 1988 Tax Calculator\n");

    while (1) {
        printf("1) Single  2) Head of Household  3) Married, Joint  4) Married Separate\n");
        printf("Enter your tax category (1-4) or 5 to quit: ");
        scanf("%d", &category);

        switch (category) {
            case SINGLE:
                bracket = 17850.0;
                break;
            case HEAD_OF_HOUSEHOLD:
                bracket = 23900.0;
                break;
            case MARRIED_JOINT:
                bracket = 29750.0;
                break;
            case (MARRIED_SEPARATE):
                bracket = 14875.0;
                break;
            case EXIT:
                printf("Bye.\n");
                return 0;
            default:
                flush_input_buffer();
                printf("Invalid input: please enter an integer between 1 and 5.\n");
                continue;
        }
        printf("Enter your income: ");
        while (scanf("%f", &income) != 1 || income < 0) {
            flush_input_buffer();
            printf("Invalid input: please enter a positive number.\n");
            printf("Enter your income: ");
        }

        if (income > bracket) {
            taxes = RATE_2 * (income - bracket) + RATE_1 * bracket;
        } else {
            taxes = RATE_1 * income;
        }

        printf("You will owe $%.2f in taxes.\n\n", taxes);
    }

    return 0;
}

void flush_input_buffer(void)
{
    while (getchar() != '\n') {
        continue;
    }
}