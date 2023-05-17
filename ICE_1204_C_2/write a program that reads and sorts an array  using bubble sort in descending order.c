#include <stdio.h>
void main()
{
    int i , n, a[100],j, temp;
    printf("how many numbers to sorts:");
    scanf("%d",&n);
    printf("Enter the %d elements: ",n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<n-i-1;j++)
           {
            if(a[j]<a[j+1])
            {
            temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
           }
    }
    printf("\nAfter sorting the array contains: \n");
    for(i=0;i<n;i++)
    {
        printf("%2d",a[i]);
    }
}
