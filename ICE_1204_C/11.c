#include <stdio.h>
#include <math.h>
void main()
{
    double a, x;
    printf("Enter a number: ");
    scanf("%lf", &x);
    a = log10(x);
    printf("The logarithmic value of %.2lf is %.2lf.\n",x, a);
}
