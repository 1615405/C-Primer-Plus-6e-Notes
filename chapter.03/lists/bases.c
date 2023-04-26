/* bases.c -- 以十进制， 八进制， 十六进制打印十进制数100 */

#include <stdio.h>

int main()
{
    int x = 100;
    
    /* 在八进制和十六进制前显示 o 和 ox 前缀， 要分别在转换说明中加入# */
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}