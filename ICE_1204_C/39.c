
//problem 39
#include <stdio.h>
void main()
{
    int a1,a2,a3,a4,i,n,r;
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
    for(i=r;i>1;i--)
    {
        a3*=i;
    }
    a4 = a1/(a2*a3);
    printf("%dc%d = %d\n",n,r,a4);
}
