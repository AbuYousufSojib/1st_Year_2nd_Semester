#include <stdio.h>
void main()
{
    int a, b,c,d,rem, gcd, lcm;
    printf("Enter two numbers(where a>b): ");
    scanf("%d %d", &a, &b);
    c=a;
    d=b;
    while(d!=0)
    {
        rem = c%d;
        c = d;
        d = rem;
    }
    gcd = c;
    lcm = (a*b)/c;
    printf("The LCM value is: %d\n",lcm);
}


