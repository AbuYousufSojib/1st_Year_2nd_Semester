
#include <stdio.h>
char uppercase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i] = str[i]-32;
        }
    }
}
void main()
{
    char str[100];
    printf("Enter text: ");
    gets(str);

    uppercase(str);
    printf("\nThe upper case form is: %s",str);
}
