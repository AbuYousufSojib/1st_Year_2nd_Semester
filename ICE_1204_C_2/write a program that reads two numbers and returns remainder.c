#include <stdio.h>
void main()
{
    int num1, num2, *p1, *p2, rem;
    printf("Enter the two number: \n");
    scanf("%d %d",&num1, &num2);
    p1 = &num1;
    p2 = &num2;
    rem = *p1%*p2;
    printf("Remainder of the two numbers is: %d\n",rem);
    getch();
}

