#include <stdio.h>
#include <string.h>
void main()
{
    char h[100];
    int i=0,k,n;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    while(n>0)
    {
        k = n%16;
        if(k>9)
            h[i]=k+55;
        else
            h[i]=k+48;
        n = n/16;
        i++;
    }
    h[i]='\0';
    strrev(h);
    printf("The output value is: %s\n",h);
    getch();
}
