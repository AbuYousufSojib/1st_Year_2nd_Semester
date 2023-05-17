#include <stdio.h>
void main()
{
    int i,n,j,isprime;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        isprime = 1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0){
                isprime = 0;
                break;
            }
        }
        if (isprime == 1){
        printf("%d, ", i);
        }
    }
}
