#include<stdio.h>

const double MID = 2.54; // 定义常量

int main()
{
    int inch; // 定义变量
    scanf("%d", &inch);

    float ceremeter; // 定义变量
    ceremeter = MID * inch; // 变量转换公式
    printf("%.2f\n", ceremeter);
    return 0;
}