#include<stdio.h>
int gcd(int a, int b)
{
    int rem;
    while(b!=0)
    {
        rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}
void main()
{
    int num1, num2;
    printf("Enter two numbers (num1>num2): \n");
    scanf("%d %d", &num1,&num2);
    printf("GCD = %d",gcd(num1,num2));
    getch();
}
