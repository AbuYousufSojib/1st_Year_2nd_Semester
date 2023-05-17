//problem 38
#include <stdio.h>
void main()
{
    int a1,a2,a3,i,n,r;
    printf("Enter the two numbers:");
    scanf("%d%d",&n,&r);
    a1=a2=a3=1;
    for(i=n;i>1;i--)
    {
        a1*=i;
    }
    for(i=n-r;i>1;i--)
    {
        a2*=i;
    }
    a3 = a1/a2;
    printf("%dP%d = %d\n",n,r,a3);
}
