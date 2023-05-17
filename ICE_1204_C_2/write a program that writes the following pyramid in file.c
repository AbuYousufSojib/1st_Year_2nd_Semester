#include<stdio.h>
void main()
{
    int i,j,n;
    FILE *x;
    x = fopen("Pyramid.out","w");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            fprintf(x,"%4d",i);
        fprintf(x,"\n");
    }
}
