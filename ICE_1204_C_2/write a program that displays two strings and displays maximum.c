#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char *i,*j,*max;
    i= (char *)malloc(sizeof(char)*50);
    j= (char *)malloc(sizeof(char)*50);
    printf("Enter 1st string: ");
    scanf("%s",i);
    printf("Enter 2nd string: ");
    scanf("%s",j);
    if(strcmp(i,j)>0)
        max = i;
    else
        max = j;
    printf("Maximum = %s", max);
    getch();
}
