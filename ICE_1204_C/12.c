#include <stdio.h>
int main()
{
    int x, out;
    printf("Enter mark:");
    scanf("%d", &x);
    if(x>=0&&x<=39)
    {
        printf("F");
    }
    else if(x>=40&&x<45)
    {
        printf("D");
    }
    else if(x>=45&&x<50)
    {
        printf("C");
    }
    else if(x>=50&&x<55)
    {
        printf("C+");
    }
    else if(x>=55&&x<60)
    {
        printf("B-");
    }
    else if(x>=60&&x<65)
    {
        printf("B");
    }
    else if(x>=65&&x<70)
    {
        printf("B+");
    }
    else if(x>=70&&x<75)
    {
        printf("A-");
    }
    else if(x>=75&&x<80)
    {
        printf("A");
    }
    else if(x>=80&&x<=100)
    {
        printf("A+");
    }
    return 0;

}
