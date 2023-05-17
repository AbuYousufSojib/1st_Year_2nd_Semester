#include <stdio.h>
long fibonacci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("\nFibonacci number is: %ld ",fibonacci(a));
}
