/* praise2.c */

#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary being."

int main()
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));
    printf("The phrase of phrase has %zd letters ", strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof(PRAISE));

    return 0;
}