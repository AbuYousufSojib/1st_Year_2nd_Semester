#include <stdio.h>
void main()
{
    int a, b, c, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("%d is a fibonacci term.\n\n");
    }
    else
    {
        a=0;
        b=1;
        c=a+b;
        while(c<n)
        {
            a = b;
            b = c;
            c = a+b;
        }
        if(c==n)
        {
            printf("%d is a fibonacci term.\n\n",n);
        }
        else
        {
            printf("%d is not a fibonacci term.\n\n",n);
        }
    }
}
