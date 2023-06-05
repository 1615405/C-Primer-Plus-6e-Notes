#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];

    printf("Enter your first name: ");
    scanf("%s", name);
    
    int name_length = strlen(name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name); 
    printf("\"%*s\"\n", name_length + 3, name); 

    return 0;
}