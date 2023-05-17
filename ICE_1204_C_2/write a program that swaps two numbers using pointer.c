#include <stdio.h>
void swap(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
void main()
{
    int a, b;
    printf("a and b = \n");
    scanf("%d %d",&a, &b);

    swap(&a,&b);
    printf("After swap: \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    getch();
}
