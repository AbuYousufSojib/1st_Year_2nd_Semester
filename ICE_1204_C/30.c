
#include<stdio.h>
void main()
{
            int i=1,j,n,x=1;

            printf("Please Enter the number :");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                x=1;
                for(j=1;j<=i;j++)
                {
                            printf("%4d",x);
                            x=(x*(i-j)/j);
                        }
                printf("\n");
            }

}
