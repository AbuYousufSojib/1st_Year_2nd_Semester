#include <stdio.h>
void main()
{
    int ara[100],i, n, position, element;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("\nEnter the value of %d element:",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    printf("\nEnter the position of value:");
    scanf("%d",&position);

    printf("\nEnter the value to insert:");
    scanf("%d",&element);

    for(i=n;i>position-1;i--)
    {
        ara[i] = ara[i-1];
    }
    ara[position-1]= element;
    printf("Resultant array is: \n");
    for(i=0;i<=n;i++)
    {
        printf("%d ",ara[i]);
    }
}
