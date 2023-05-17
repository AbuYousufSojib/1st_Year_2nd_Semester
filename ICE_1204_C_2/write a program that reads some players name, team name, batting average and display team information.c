#include <stdio.h>
#include<string.h>
struct abc
{
    char pname[30],tname[30], bavg[10];
};
void main()
{
    int n,i,in,out;
    struct abc a[12], temp;
    char str[30];

    printf("How many player:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\Player name: ");
        scanf("%s",a[i].pname);
        printf("\Team name: ");
        scanf("%s",a[i].tname);
        printf("\Batting average: ");
        scanf("%s",a[i].bavg);
    }
    for(out=n-1;out>0;out--){
        for(in=0;in<out;in++){
            if(strcmp(a[in].tname,a[in+1].tname)>0)
            {
                temp = a[in];
                a[in]=a[in+1];
                a[in+1]=temp;
            }
        }
    }
    printf("\nPlayername   Average");

    i=0;
    strcpy(str,"");
    while(i<n)
    {
        if(strcmp(str, a[i].tname)!=0)
        {
            printf("\n%5s",a[i].tname);
            strcpy(str,a[i].tname);

        }
        else
        {
            printf("\n%5s %10s",a[i].pname, a[i].bavg);
            i++;
        }
    }

    getch();


}
