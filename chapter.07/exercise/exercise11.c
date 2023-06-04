#include <stdio.h>
#include <stdbool.h>

#define ARTICHOKE_PRICE_PER_LB 2.05
#define BEET_PRICE_PER_LB 1.15
#define CARROT_PRICE_PER_LB 1.09

#define SHIPPING_5LB 6.50
#define SHIPPING_20LB 14.00
#define SHIPPING_OVER_20LB_RATE 0.5

#define DISCOUNT_RATE 0.05

void flush_input_buffer(void);
float calculate_shipping(float weight);

int main(void)
{
    float artichoke_weight = 0, beet_weight = 0, carrot_weight = 0, total_weight;
    float artichoke_price, beet_price, carrot_price, subtotal, discount, shipping, total;
    bool discount_flag;
    float weight;
    char option;

    printf("ABC Mail Order Grocery\n");
    while (1) {
        printf("What would you like to order?\n");
        printf("a) artichokes  b) beets  c) carrots  q) quit\n");
        option = getchar();
        switch (option) {
            case 'q':
                printf("Bye.\n");
                return 0;

            case 'a': 
                printf("How many pounds of artichokes would you like to add? ");
                if (scanf("%f", &weight) == 1) {
                    artichoke_weight += weight;
                }
                else {
                    flush_input_buffer();
                    printf("Invalid input. Try again.\n");
                    continue; 
                }
                break;

            case 'b': 
                printf("How many pounds of beets would you like to add? ");
                if (scanf("%f", &weight) == 1) {
                    beet_weight += weight;
                }
                else {
                    flush_input_buffer();
                    printf("Invalid input. Try again.\n");
                    continue; 
                }
                break;

            case 'c': 
                printf("How many pounds of carrots would you like to add? ");
                if (scanf("%f", &weight) == 1) {
                    carrot_weight += weight;
                }
                else {
                    flush_input_buffer();
                    printf("Invalid input. Try again.\n");
                    continue; 
                }
                break;

            default:
                printf("Invalid input. Try again.\n");
                continue;
        }

        artichoke_price = artichoke_weight * ARTICHOKE_PRICE_PER_LB;
        beet_price = beet_weight * BEET_PRICE_PER_LB;
        carrot_price = carrot_weight * CARROT_PRICE_PER_LB;
        subtotal = artichoke_price + beet_price + carrot_price;

        if (subtotal >= 100) {
            discount_flag = true;
            discount = DISCOUNT_RATE * subtotal;
        }
        else {
            discount_flag = false;
        }

        total_weight = artichoke_weight + beet_weight + carrot_weight;
        shipping = calculate_shipping(total_weight);

        total = subtotal + shipping - (discount_flag ? discount : 0.0);

        printf("\n");
        printf("Your order summary:\n\n");
        printf("Artichokes: %.2flbs @ $%.2f/lb: $%.2f\n", artichoke_weight, ARTICHOKE_PRICE_PER_LB, artichoke_price);
        printf("Beets: %.2flbs @ $%.2f/lb: $%.2f\n", beet_weight, BEET_PRICE_PER_LB, beet_price);
        printf("Carrots: %.2flbs @ $%.2f/lb: $%.2f\n", carrot_weight, CARROT_PRICE_PER_LB, carrot_price);
        printf("\n");
        printf("Subtotal: $%.2f\n", subtotal);
        if (discount_flag) {
            printf("%.0f%% discount: $%.2f\n", DISCOUNT_RATE * 100, discount);
        }
        printf("Shipping charges: $%.2f\n", shipping);
        printf("Grand total: $%.2f\n", total);
        printf("\n");

        flush_input_buffer();
    }
}

void flush_input_buffer(void)
{
    while (getchar() != '\n') {
        continue;
    }
}

float calculate_shipping(float weight)
{
    if (weight < 5.0) {
        return SHIPPING_5LB;
    }
    else if (weight < 20.0) {
        return SHIPPING_20LB;
    }
    return SHIPPING_20LB + SHIPPING_OVER_20LB_RATE * (weight - 20.0);
}