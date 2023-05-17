#include<stdio.h>
int sumation(int pnum)
{
    int i=0;
    while(pnum>0)
    {
        i = i+pnum%10;
        pnum = pnum/10;
    }
    return i;
}
int root(int pnum)
{
    while(pnum>9)
        pnum = sumation(pnum);

    return pnum;
}
void main()
{
    int a;
    printf("Enter a positive number:\n");
    scanf("%d",&a);
    printf("The digital root of positive integer is = %d",root(a));
    getch();
}
