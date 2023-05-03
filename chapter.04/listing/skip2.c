/* skiptwo.c -- 跳过输入中的前两个整数 */
/* scanf()中*的用法：把*放在%和转换字符之间，会使得scanf()跳过相应的输入项 */

#include <stdio.h>

int main()
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    return 0;
}