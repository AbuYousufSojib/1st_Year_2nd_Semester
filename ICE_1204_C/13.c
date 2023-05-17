#include <stdio.h>
void main()
{
    int x, a;
    printf("Enter marks:");
    scanf("%d", &x);
    if(x>=0&&x<40){
        printf("F");
    }
    else if(x>=40&&x<50){
        printf("3rd division");
    }
    else if(x>=50&&x<60){
        printf("2nd division");
    }
    else if(x>=60&&x<=100){
        printf("1st division");
    }
}
