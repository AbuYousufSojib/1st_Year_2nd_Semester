#include <stdio.h>
int main()
{
    double r,area, pi;
    pi=3.14;
    printf("Enter the radius of a circle:");
    scanf("%lf",&r);
    area = pi*r*r;
    printf("The area of circle is %0.2lf\n", area);
    return 0;
}
