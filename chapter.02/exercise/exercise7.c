#include <stdio.h>

void smile(void);

int main(void)
{
    for (int i = 3; i >= 1; i--) {
        smile();
    }
    printf("\n");
    for (int i = 1; i < 3; i++) {
        smile();
    }
    printf("\n");
    smile();
    printf("\n");
    
    return 0;
}

void smile(void)
{
    printf("Smile!");
}