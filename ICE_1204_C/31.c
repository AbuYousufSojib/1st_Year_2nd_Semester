#include<stdio.h>
void main()
{
    int fact=1, i, n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    printf("The fact is: %d\n",fact);
}
