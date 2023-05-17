#include <stdio.h>
void main()
{
    int a=1, b=3, i,m, n, sum;

    printf("Enter the value of n:");
    scanf("%d",&n);

    sum=0;
    for(i=1;i<=n;i++)
    {
        m = a*b;
        a = a+2;
        b = b+2;
        m<=n;
        sum = sum+m;
    }
    printf("The summation is %d",sum);
}
