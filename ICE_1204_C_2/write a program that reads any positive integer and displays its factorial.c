#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *i, *n;
    long *fact;
    i = (int *)malloc(sizeof(int));
    n = (int *)malloc(sizeof(int));
    fact = (long *)malloc(sizeof(long));
    printf("Enter any positive integer: ");
    scanf("%d",n);
    *fact = 1;
    for(*i=1;*i<=*n;(*i)++)
    {
        *fact = *fact**i;
    }
    printf("Factorial = %ld",*fact);
    getch();
}
