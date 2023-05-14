/* for_cube.c -- using a for loop to make a table of cubes */

#include <stdio.h>

int main(void)
{
    int num;

    printf("    n    n cubed\n");
    for (num = 1; num <= 6; num++) {
        printf("%5d %5d\n", num, num * num * num);
    }

    return 0;
}

/*
// for_down.c 

#include <stdio.h>

int main(void)
{
    int secs;

    for (secs = 5; secs > 0; secs--) {
        printf("%d seconds!\n", secs);
    }
    printf("We have ignition!\n");

    return 0;
}
*/

/*
// for_13s.c

#include <stdio.h>

int main(void)
{
    int n;

    for (n = 2; n < 60; n = n + 13) {
        printf("%d\n", n);
    }

    return 0;
}
*/


/*
// for_char.c

#include <stdio.h>

int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("The ASCII value for %c is %d.\n", ch, ch);
    }

    return 0;
}
*/

/*
// for_geo.c

#include <stdio.h>

int main(void)
{
    double debt;

    for (debt = 100.0; debt < 150.0; debt = debt * 1.1) {
        printf("Your debt is now $%.2f.\n", debt);
    }

    return 0;
}
*/

/*
// for_wild.c

#include <stdio.h>

int main(void)
{
    int x;
    int y = 55;

    for (x = 1; y <= 75; y = (++x * 5) + 50) {
        printf("%10d %10d\n", x, y);
    }

    return 0;
}
*/

/*
// for_none.c

#include <stdio.h>

int main(void)
{
    int ans, n;

    ans = 2;
    for (n = 3; ans <= 25; ) {
        ans = ans * n;
    }
    printf("n = %d, ans = %d.\n", n, ans);

    return 0;
}
*/

/*
// for_show.c

#include <stdio.h>

int main(void)
{
    int num = 0;

    for (printf(Keep entering numbers!\n); num != 6; ) {
        scanf("%d", &num);
    }

    printf("That's the one I want!\n");
    return 0;
}
*/