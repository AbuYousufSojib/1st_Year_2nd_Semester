#include <stdio.h>
void main()
{
    int a, b,rem, gcd;
    printf("Enter two numbers(where a>b): ");
    scanf("%d %d", &a, &b);
    while(b!=0)
    {
        rem = a%b;
        a = b;
        b = rem;
    }
    gcd = a;
    printf("The GCD value is: %d\n",gcd);
}
