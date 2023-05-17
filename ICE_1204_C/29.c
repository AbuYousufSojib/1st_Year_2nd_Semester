#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the line to print: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("    ");
        }
        for(j=i;j<=2*i-1;j++){
            printf("%4d",j%10);
        }
        for(j=2*i-2;j>=i;j--){
            printf("%4d",j%10);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf("    ");
        }
        for(j=i;j<=2*i-1;j++){
            printf("%4d",j%10);
        }
        for(j=2*i-2;j>=i;j--){
            printf("%4d",j%10);
        }
        printf("\n");
    }
}
