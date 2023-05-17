
#include <stdio.h>
#include <string.h>
void main()
{
    int b[100],n;
    long int i=0;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    while(n>0)
    {
        b[i]=n%8;
        n=n/8;
        i++;
    }
    printf("The octal form is: ");
    for(i=i-1;i>=0;i--)
    {
        printf("%ld",b[i]);
    }
}
