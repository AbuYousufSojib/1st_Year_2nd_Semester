
#include <stdio.h>

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

void main()
{
 int n,r,npr;

  	printf("Enter a number of n and r: \n");
  	scanf("%d %d",&n,&r);
  	npr=fact(n)/fact(n-r);
    printf("Value of %dP%d = %d\n",n,r,npr);
    getch();
}

