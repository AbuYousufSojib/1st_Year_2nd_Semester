#include <stdio.h>
#include <math.h>
void main()
{
    double pi =  3.1416;
    double x, result;
    printf("Enter the value of angle:");
    scanf("%lf",&x);
    result = asin(x)*180/pi;
    printf("Inverse of sin(%.2f) = %.2lf in degrees\n", x, result);
}
