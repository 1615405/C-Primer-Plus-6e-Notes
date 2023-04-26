/* C Primer Plus

chapter 3 Exercise 1:

Find out what your system does with integer overflow, floating-point overflow,
and floating point underflow by using the experimental approach; that is,
write programs that have these problems. */


#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int biggest_int = INT_MAX;
    int smallest_int = INT_MIN;
    float biggest_flt = FLT_MAX;
    float small_flt = 1.4E-45;

    /* 浮点数下溢出分为渐进下溢和突然下溢， 最小正次正规数为 1.4E-45， 最小正正规数为 1.1E-38 */
    printf("INT_MAX = %d, INT_MAX + 1 = %d\n", biggest_int, biggest_int + 1);
    printf("INT_MIN = %d, INT_MIN - 1 = %d\n", smallest_int, smallest_int - 1);
    printf("FLT_MAX = %e, FLT_MAX * 2.0f = %e\n", biggest_flt, biggest_flt * 2.0f);
    printf("small_flt = %e, small_flt / 2.0f = %e\n", small_flt, small_flt / 2);

    return 0;
}