#include<stdio.h>
struct student
{
    char name[30];
    int roll, mark;
};
void main()
{
    struct student a[100], temp;
    int i, j, n;
    FILE *fi;
    fi = fopen("mark.in","r");
    n = 0;
    while(fscanf(fi,"%s %d %d",a[n].name, &a[n].roll, &a[n].mark)!=EOF)
        n++;
    for(i = n-1;i>=0;i--)
    for(j=0;j<i;j++)
    if(a[j].mark<a[j+1].mark)
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    printf("\Name    Roll   Mark\n");
    for(i=0;i<n;i++)
        printf("\n%s%4d%3d",a[i].name,a[i].roll,a[i].mark);
    getch();
}
