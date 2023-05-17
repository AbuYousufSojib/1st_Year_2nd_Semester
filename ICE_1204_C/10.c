#include <stdio.h>
#include <math.h>
void main()
{
    float n, x;
    //here x represents the square root
    //here n represents a number
    printf("Enter the number: ");
    scanf("%f", &n);
    x = sqrt(n);
    printf("Square root is: %0.2f", x);
}
