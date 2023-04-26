/* first.c -- 一个简单的C程序 */

#include <stdio.h> // #include 这行代码是一条C预处理器指令。通常，C编译器在编译前会对源代码做一些准备工作，即预处理。

int main()
{
    int num; // 声明把特定的标识符与计算机内存中的特定位置联系起来，同时也确定了储存在某位置的信息类型或数据类型
    num = 1;

    printf("I am a simple ");
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n", num);

    return 0;
}