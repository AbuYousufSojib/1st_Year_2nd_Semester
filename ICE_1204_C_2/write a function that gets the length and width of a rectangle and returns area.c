#include<stdio.h>
int area(int a, int b)
{
    return (int)a*b;
}
void main()
{
    int length, width;
    printf("Length and Width are:\n");
    scanf("%d %d",&length,&width);
    printf("Area of rectangle: %ld\n",area(length,width));
    getch();
}
