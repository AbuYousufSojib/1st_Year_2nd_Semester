#include <stdio.h>
void main()
{
    int i, num, sum=0;
    printf("Enter the nth value: ");
    scanf("%d", &num);
    for(i=1;i<=num;i=i+2)
    {
        sum = sum+i;
    }
    printf("The summation is: %d", sum);
}
