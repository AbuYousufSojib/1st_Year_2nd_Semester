#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *a, *b, *c;
    a = (float *)malloc(sizeof(float));
    b = (float *)malloc(sizeof(float));
    printf("the two numbers are (a,b): ");
    scanf("%f %f",a,b);
    if(*a>*b)
        c=a;
    else
        c=b;
    printf("Maximum = %f",*c);
    getch();
}
