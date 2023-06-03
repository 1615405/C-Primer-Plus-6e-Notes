#include <stdio.h>
  
void jolly(void);
void deny(void);

int main(void)
{
    for (int i = 1; i <= 3; i++) {
        jolly();
    }
    deny();

    return 0;
}

void jolly(void)
{
    printf("For He's a jolly good fellow!\n");
}

void deny(void)
{
    printf("which nobody can deny!\n");
}