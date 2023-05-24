/*
 * C Primer Plus Sixth Edition
 *
 * Chapter 7 Exercise 8:
 *
 * Modify assumption a. in exercise 7 so that the program presents a menu of
 * pay rates from which to choose. Use a switch to select the pay rate. The
 * beginning of a run should look something like this:
 *
 * *****************************************************************
 * Enter the number corresponding to the desired pay rate or action:
 * 1) $8.75/hr 							2) $9.33/hr
 * 3) $10.00/hr 						4) $11.20/hr
 * 5) quit
 * *****************************************************************
 *
 * If choices 1 through 4 are selected, the program should request the hours
 * worked. The program should recycle until 5 is entered. If something other
 * than choices 1 through 5 is entered, the program should remind the user what
 * the proper choices are and then recycle. Use #defined constants for the
 * various earning rates and tax rates.
 */


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
		printf("1) $%.2f/hr 				2) $%.2f/hr\n", RATE_1, RATE_2);
		printf("3) $%.2f/hr 				4) $%.2f/hr\n", RATE_3, RATE_4);
		printf("5) quit \n");
		printf("*****************************************************************\n");

		
	}
}