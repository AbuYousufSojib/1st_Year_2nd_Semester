#include <stdio.h>
int main()
{
    int x, a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    x = a^b;
    printf("The Bitwise exclusive  value is: %d\n", x);
    return 0;
}
