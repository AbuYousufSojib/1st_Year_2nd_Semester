#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];

    printf("Enter any line of text: ");
    gets(str);

    strupr(str);

    printf("The upper case form is: %s\n",str);
    getch();
}
