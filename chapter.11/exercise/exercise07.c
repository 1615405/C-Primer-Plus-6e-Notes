#include <stdio.h>

#define LIMIT 50

char *mystrcpy(char *s1, char *s2, int n);
char *s_gets(char *string, int n);
void clear_string(char *string, int n);

int main(void)
{
    char s1[LIMIT];
    char s2[LIMIT];
    int n;

    while (s_gets(s2, LIMIT) && s2[0] != '\0') {
        scanf("%d, &n");
        while (getchar() != '\n') {
            continue;
        }
        if (n > LIMIT) 
            n = LIMIT;

        puts(s2);
        mystrcpy(s1, s2, n);
        puts(s1);
    }
    
    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') {
            st[i] = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}

char *mystrcpy(char *s1, char *s2, int n)
{
    int i = 0;
    while (s2[i] && i < n) {
        s1[i] = s2[i];
        i++;
    }

    return s1;
}