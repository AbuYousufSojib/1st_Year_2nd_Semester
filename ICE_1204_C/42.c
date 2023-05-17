
#include <stdio.h>
void main()
{
    int i,a,b,n,c;
    printf("enter the value on n: ");
    scanf("%d", &n);
    a=0;
    b=1;
    c=0;
    for(i=0;i<=n;i++)
    {
        a = b;
        b = c;
        printf("%d ",b);
        c = a+b;

    }
}
