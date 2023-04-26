#include <stdio.h>

void one_three(void);
void two(void);

int main()
{
    printf("starting Now : \n");
    one_three(); /* 函数嵌套 */
    printf("Done!\n");

    return 0;
}

void one_three(void)
{
    printf("one\n");
    two();
}

void two(void)
{
    printf("two\n");
    printf("three\n");
}