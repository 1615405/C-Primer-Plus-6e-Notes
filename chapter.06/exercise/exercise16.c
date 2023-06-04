#include <stdio.h>

int main(void)
{
    const float DEIRDE_PRINCIPLE = 100.0f;
    const float DAPHNE_PRINCIPLE = 100.0f;
    const float DEIRDE_INTEREST = 0.05f;
    const float DAPHNE_INTEREST = 0.10f;

    int years = 0;
    float daphne_balance = DAPHNE_PRINCIPLE;
    float deirdre_balance = DEIRDE_PRINCIPLE;

    while (deirdre_balance <= daphne_balance) {
        deirdre_balance *= 1.0f + DEIRDE_INTEREST;
        daphne_balance += DAPHNE_PRINCIPLE * DAPHNE_INTEREST;
        years++;
    }
    
    printf("After %d years, Daphne's investment is worth $%.2f and Deirdre's investment is worth $%.2f.\n",
        years, daphne_balance, deirdre_balance);

    return 0;
}