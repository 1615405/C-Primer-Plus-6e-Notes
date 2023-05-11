/* varwid.c -- 使用变宽输出字段 */

#include <stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number is :%*d\n", width, number);
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");

    return 0;
}
/***
 *** printf()和scanf()都可以使用*修饰符来修改转换说明的含义。
 *** 如果你不想预先指定字段宽度，希望通过程序来指定，那么可以通过*修饰符代替字段宽度。但是还要用
 *** 一个参数告诉函数，字段宽度应该是多少。
 ***/ 