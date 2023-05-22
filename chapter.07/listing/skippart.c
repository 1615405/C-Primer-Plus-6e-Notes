/* skippart.c -- use continue to skip part of loop */

#include <stdio.h>

int main(void)
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf("Enter the first score (q to quit): ");
    while (scanf("%f", &score) == 1)
    {
        if (score < MIN || score > MAX)
        {
            printf("%0.1f is an invalid value. Try again: ", score);
            continue;
        }
        printf("Accepting %0.1f:\n", score);
        min = score < min ? score : min;
        max = score > max ? score : max;
        total += score;
        n++;
        printf("Enter next score (q to quit): ");
    }
    if (n > 0)
    {
        printf("Average of %d score is %0.1f.\n", n, total / n);
        printf("Low = %0.1f, high = %0.1f.\n", min, max);
    }
    else
        printf("No valid scores were entered.\n");
    return 0;
}


/**
 * The continue statement can be used in the three loop forms. When encountered, it causes the rest of an iteration to 
 * be skipped and the next iteration to be started. If the continue statement is inside nested structures, it affects 
 * only the innermost structure containing it.
 * 
 * You're seen that the continue statement causes the ramaining body of a loop to be skipped. For the while and do while
 * loops, the next action taken after the continue statement is to evaluate the loop test expression.
 * For a for loop, the next actions are to evaluate the update expression and then the loop test expression.
*/