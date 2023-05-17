#include <stdio.h>
#include <math.h>
float area(float r)
{
    return M_PI*r*r;
}
void main()
{
    float radius;
    printf("Radius = ");
    scanf("%f",&radius);
    printf("Area = %f",area(radius));
    getch();
}
