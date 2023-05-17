
#include<stdio.h>
long factorial(int n)
{
    int i;
    long f = 1;
    for(i=1;i<=n;i++)
        f = f*i;
    return f;
}
void main()
{
    int n;
    printf("Enter any positive integer: ");
    scanf("%d",&n);
    printf("Factorial = %ld",factorial(n));
    getch();
}
