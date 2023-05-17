#include <stdio.h>
void main()
{
    int i, num;
    float ara[50], sum = 0.0, avg;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n");

    while(num >50||num<=0)
    {
        printf("This number is not in serial(1-50).\n\n");
        printf("Again enter number: ");
        scanf("%d",&num);
        printf("\n\n");
    }

    for(i=0;i<num;++i)
    {
        printf("%d. enter number: ",i+1);
        scanf("%f",&ara[i]);
        sum = sum+ara[i];
        printf("\n");
    }

    avg = sum/num;
    printf("The average value is %0.2f\n\n",avg);
}
