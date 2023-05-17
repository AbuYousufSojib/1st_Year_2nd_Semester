#include<stdio.h>
long func(int pnum)
{
    if(pnum==0)
    {
        return 1;
    }
    return (long)pnum*func(pnum-1);
}
void main()
{
    int n;
    printf("Enter any positive integer: ");
    scanf("%d",&n);
    printf("\nFactorial = %ld",func(n));
}
