#include <stdio.h>
struct std
{
   char name[30];
   int mark1, mark2, mark3, total, total2;
};
void main()
{
    struct std a[100];
    int i, n;
    FILE *fp;
    fp = fopen("GPA.txt","r");
    if(fp==NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File is opened.\n");
    n=0;
    while(fscanf(fp,"%s %d %d %d",&a[n].name,&a[n].mark1,&a[n].mark2,&a[n].mark3)!=EOF){
        a[n].total = (a[n].mark1+a[n].mark2+a[n].mark3)/3;
        a[n].total2 = a[n].total;
        n++;
    }
    printf("\nName          Total Average Mark           GPA\n");
    printf("\n");

    for(i=0;i<n;i++)
    {
        printf("\n%s              %d                  %0.f",a[i].name,a[i].total,a[i].total2);
        if(a[i].total2>=80)
            printf("4.00");
        else if(a[i].total2>=75&&a[i].total2<80)
            printf("3.75");
        else if(a[i].total2>=70&&a[i].total2<75)
            printf("3.50");
        else if(a[i].total2>=65&&a[i].total2<70)
            printf("3.25");
        else if(a[i].total2>=60&&a[i].total2<65)
            printf("3.00");
        else if(a[i].total2>=55&&a[i].total2<60)
            printf("2.75");
        else if(a[i].total2>=50&&a[i].total2<55)
            printf("2.50");
        else if(a[i].total2>=45&&a[i].total2<50)
            printf("2.00");
        else if(a[i].total2>=40&&a[i].total2<45)
            printf("1.00");
        else
            printf("F");
    }

    printf("\n");

       fclose(fp);
    }
}
