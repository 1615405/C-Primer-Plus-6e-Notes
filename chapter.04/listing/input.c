/* input.c -- 何时使用& */

#include <stdio.h>

int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}

/* scanf()把输入的字符串转换成整数，浮点数，字符或字符串， 而printf()把整数，浮点数，字符和字符串转换成显示在屏幕上的文本 */
/* printf()函数使用变量，常量和表达式，而scanf()函数使用指向变量的指针 */

/***
 ***对于float和double类型，printf()函数都使用 %f, %e, %E, %g, %G转换说明。而scanf()函数只把
 ***它们用于float类型，对于double类型要使用l修饰符。
 **/