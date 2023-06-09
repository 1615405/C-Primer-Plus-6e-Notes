/* altname.c -- portable names for integer types */

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    int32_t me32 = 459339445;
    
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId32 "\n", me32);

    return 0;
}