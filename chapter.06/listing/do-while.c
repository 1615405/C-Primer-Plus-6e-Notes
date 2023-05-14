/* do-while.c -- exit condition loop */

#include <stdio.h>

int main(void)
{
    const int SECRET_CODE = 13;
    int code_entered;

    do {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != SECRET_CODE);

    printf("Congratulations! You are cured!\n");

    return 0;
}

/**
 * The while loop and the for loop are both entry-condition loops. The test condition is checked before each iteration 
 * of the loop, so it possible for the statements in the loop to never execute. C also has an exit-condition loop, 
 * in which the condition is checked after each iteration of the loop, guaranteeing that statements are executed at 
 * least once. This variety is called a do while loop.
 * 
 * A do while loop is always executed at least once because the test is made after the body of the loop has been 
 * executed. A for loop or a while loop, on the other hand, can be executed zero times because the test is made before
 * execution.
*/