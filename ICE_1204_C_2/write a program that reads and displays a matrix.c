
#include <stdio.h>
void main()
{
    int a[3][3], m, n;
    printf("input elements in the matrix:\n");
    for(m=0;m<3;m++)
    {
        for(n=0;n<3;n++)
        {
            printf("Element - [%d],[%d] ",m,n);
            scanf("%d", &a[m][n]);
        }
    }
    for(m=0;m<3;m++)
    {
        printf("\n");
        for(n=0;n<3;n++)
        {
            printf("%d\t",a[m][n]);
        }

    }
}
