#include<stdio.h>
void main()
{
    int a, b, m, n, c, d, p, sum=0;
    int f[10][10], s[10][10],add[10][10], mul[10][10];

    printf("Enter the row and column value for 1st matrix: \n");
    scanf("%d%d", &a, &b);

    printf("Input the first matrix element: \n");
    for(m=0; m<a; m++)
        for(n=0; n<b; n++)
            scanf("%d",&f[m][n]);

    printf("Enter the row and column value for second matrix: \n");
    scanf("%d%d",&c,&d);

    printf("Input the second matrix element: \n");
        for(m=0; m<c; m++)
            for(n=0; n<d; n++)
                scanf("%d",&s[m][n]);

    if(a!=c && b!=d)
        printf("This matrix is not additionable\n");

    else{
        for(m=0;m<a;m++)
            for(n=0;n<b;n++)
            add[m][n]=f[m][n]+s[m][n];

    }
    printf("The sum of two matrix is: \n");
    for(m=0;m<a;m++)
    {
        for(n=0;n<b;n++)
            printf("%d\t",add[m][n]);
            printf("\n");
    }

    if(b!=c)
        printf("This matrices are not multiplicable\n");

    else{
        for(m=0; m<a; m++){
            for(n=0; n<d; n++){
                for(p=0; p<c; p++){
                    sum = sum + f[m][p]*s[p][n];
                    }
                mul[m][n] = sum;
                sum = 0;
            }
        }
        printf("product of the matrix:\n");
        for(m=0; m<a; m++){
            for(n=0; n<d; n++)
                printf("%d\t",mul[m][n]);

            printf("\n");
        }
    }
}
