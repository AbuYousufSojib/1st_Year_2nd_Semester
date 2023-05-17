#include <stdio.h>
void main()
{
    int x, y, z;
    scanf("%d %d", &x,&y);
    z = x^y;
    printf("Exclusive OR : %d ^ %d = %d\n", x, y, z);
}
