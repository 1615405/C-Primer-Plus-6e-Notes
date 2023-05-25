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