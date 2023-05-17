#include <stdio.h>
void main()
{
    int a=1, b=3, c=5, d=7,i,n,m,sum=0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        m= a*b*c*d;
        a=a+2;
        b=b+2;
        c=c+2;
        d=d+2;
        m<=n;
        sum = sum+m;
    }
    printf("The summation is %d\n",sum);
}
