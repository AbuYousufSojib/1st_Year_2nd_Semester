#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char *str;
    int i, l;

    str = (char *)malloc(sizeof(char)*100);

    printf("Enter name: ");
    gets(str);

    l = strlen(str);

    printf("Name with one space in reverse is: \n");
    for(i=l-1; i>=0;i--)
    {
        printf("%c ",*(str+i));
    }
    getch();
}

