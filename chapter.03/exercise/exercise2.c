#include <stdio.h>

int main(void)
{
    int ascii_code;
    printf("Enter an ASCII code: ");
    scanf("%d", &ascii_code);
    printf("Character for ASCII code %d: %c\n", ascii_code, ascii_code);

    return 0;
}