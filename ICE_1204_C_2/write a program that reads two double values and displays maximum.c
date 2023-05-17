#include <stdio.h>
void main()
{
    double num1, num2,*p1, *p2, *max;
    printf("Enter any two numbers: \n");
    scanf("%lf%lf", &num1, &num2);
    p1 = &num1;
    p2 = &num2;
    if(*p1>*p2)
        max = p1;
    else
        max = p2;
    printf("Maximum = %0.2lf",*max);
    getch();
}
