/* animals.c -- uses a switch statement */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give an animal name beginning with that letter.\n");
    printf("Please type in a letter: type # to end my act.\n");

    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;
        if (islower(ch))
        {
            switch(ch)
            {
                case 'a':
                    printf("argali, a wild sheep of Asia\n");
                    break;
                case 'b':
                    printf("babirusa, a wild pig of Malay\n");
                    break;
                case 'c':
                    printf("coati, recoonlike mammal\n");
                    break;
                case 'd':
                    printf("desman, aquatic, molelike critter\n");
                    break;
                case 'e':
                    printf("echidna, the spiny anteater\n");
                    break;
                case 'f':
                    printf("fisher, brownish marten\n");
                default :
                    printf("That's a stumper!\n");
            }
        }
        else
            printf("I recognize only lowercase letters.\n");
        while (getchar() != '\n')
            continue;
        printf("Please type another letter or a #.\n");
    }
    printf("Bye!\n");

    return 0;
}


/**
 * What about the break statement? It causes the program to break out of the switch and skip to the next statement after
 * the switch. Without the break statement, every statement from the matched label to the end of the switch would be 
 * processed.
 * 
 * The switch test expression in the parentheses should be one with an integer value(including type char). The case 
 * labels must be integer-type(including char) constants or integer constant expressions(expressions containing only 
 * iinteger constants).
*/