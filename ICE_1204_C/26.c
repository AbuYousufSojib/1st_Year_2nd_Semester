#include<stdio.h>
void main()
{
    int col, row, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf("  ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%4d",row);
        }

        printf("\n");
    }
}
