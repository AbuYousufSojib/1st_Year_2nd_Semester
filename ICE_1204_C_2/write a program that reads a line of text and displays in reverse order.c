#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter any line of text: ");
    gets(str);
    strrev(str);
    printf("Reverse of the line is: %s", str);
    getch();
}

