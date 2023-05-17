#include <stdio.h>
void main()
{
    int row, col, n, k=1;
    printf("Enter a value: ");
    scanf("%d",&n);
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            if(k%2==1){
                printf("0");
            }
            else{
                printf("1");
            }

        }
        printf("\n");
    }
}
