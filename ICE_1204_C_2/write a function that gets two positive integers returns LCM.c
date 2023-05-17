#include <stdio.h>
int lcm(int a, int b)
{
    int i, l=1;
    for(i=2;i<=a&&i<=b;i++)
    {
        while(a%i==0&&b%i==0)
        {
            a = a/i;
            b = b/i;
            l = l*i;
        }
    }
    l = l*a*b;
    return l;
}
void main()
{
    int a, b;
    printf("a and b is: ");
    scanf("%d %d",&a, &b);
    printf("LCM = %d", lcm(a,b));
    getch();
}
