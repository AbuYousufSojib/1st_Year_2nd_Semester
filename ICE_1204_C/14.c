#include <stdio.h>
void main()
{
    int x;
    printf("Enter a year:");
    scanf("%d", &x);
    if(x%4==0&&x%100!=0){
        printf("This year is leap year");
    }
    else if(x%400==0){
        printf("This year is leap year");
    }
    else{
        printf("This year is not leap year");
    }
}
