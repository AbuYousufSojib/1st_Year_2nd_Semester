#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    int i, l;

    printf("Enter name: ");
    gets(str);

    l = strlen(str);

    printf("Name with one space in reverse is: \n");
    for(i=l-1; i>=0;i--)
    {
        printf("%c ",str[i]);
    }
    getch();
}
