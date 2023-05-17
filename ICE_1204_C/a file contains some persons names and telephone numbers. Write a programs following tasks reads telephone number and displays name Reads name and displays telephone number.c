#include <stdio.h>
#include <string.h>
struct abc
{
    char name[20];
    long phone;
};
void main()
{
    int i, n;
    long p;
    char na[20];
    struct abc a[100];
    FILE *fp;

    fp = fopen("tel.txt","r");
    n = 0;
    if(fp==NULL)
        printf("File doesn't exist\n");
    else{
        printf("File exist\n");
    while(fscanf(fp,"%s%ld",a[n].name,&a[n].phone)!=EOF)
        n++;
    printf("Telephone number: ");
    scanf("%ld",&p);
    for(i=0; i<n; i++)
    {
        if(a[i].phone==p)
            printf("%s",a[i].name);
    }
    printf("\nName: ");
    scanf("%s",na);
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i].name,na)==0)
            printf("%ld",a[i].phone);
    }
    }
    fclose(fp);
    getch();
}
