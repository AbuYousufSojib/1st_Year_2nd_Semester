#include<stdio.h>
void main()
{
    int a=2, b=5, c=8, i, n, m, sum=0;
    printf("Enter the  value of N: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        m = a*b*c;
        a = a+3;
        b = b+3;
        c = c+3;
        sum = sum+m;
    }
    printf("Summation is %d\n",sum);
}














}
