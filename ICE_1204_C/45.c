#include <stdio.h>
void main()
{
    int ara[100],i,max,n;

    printf("Enter the value for counting: ");
    scanf("%d",&n);
    //testing the number in sequence or not.
    while(n>100||n<=0)
    {
        printf("This number is not in sequence.\n");
        printf("Again enter number: ");
        scanf("%d",&n);
        printf("\n");
    }
    //loop for input data.
    for(i=0; i<n; i++)
    {
        printf("%d. value = ",i+1);
        scanf("%d", &ara[i]);
        printf("\n");
    }
    //initialize max value.
    max = ara[0];
    //loop for finding max value.
    for(i=1; i<n; i++)
    {
        if(ara[i]>max)
            max = ara[i];
    }
    printf("the maximum value is %d\n\n",max);
}
