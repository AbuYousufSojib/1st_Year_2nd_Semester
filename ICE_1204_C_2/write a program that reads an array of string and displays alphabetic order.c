#include <stdio.h>
#include <string.h>
void main()
{
    char a[45][100], temp[45];
    int i, n, inner, outer;

    printf("the number of word: ");
    scanf("%d",&n);

    printf("Enter the %d array of string: \n",n-1);
    for(i=0;i<n;i++)
        gets(a[i]);
    for(outer=n-1;outer>=0;outer--)
        for(inner = 0;inner<outer;inner++)
        if(strcmpi(a[inner],a[inner+1])>0)
        {
            strcpy(temp, a[inner]);
            strcpy(a[inner], a[inner+1]);
            strcpy(a[inner+1],temp);
        }
    for(i=0;i<n;i++)
        printf("\n%s",a[i]);
    getch();

}
