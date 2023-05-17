
#include <stdio.h>
struct std
{
    char name [50];
    int roll, mark;
};
void main()
{
    struct std a[100];
    int i, n;
    FILE *fp;
    fp = fopen("std.txt","r");
    n = 0;
    while(fscanf(fp,"%s %d %d",&a[n].name,&a[n].roll, &a[n].mark)!=EOF)
    n++;
    printf("\nName         Roll          Mark");
    printf("\n----         ----          ----");
    for(i=0;i<n;i++)
        printf("\n%s%9d%10d",a[i].name,a[i].roll,a[i].mark);

    fclose(fp);

}
