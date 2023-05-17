#include<stdio.h>
struct abc
{
    char name[30],address[30];
    int grade, charge, num_room;
};
void main()
{
    struct abc a[100],temp;
    int i, j, g, n, value;
    FILE *fp;
    fp = fopen("Hotel.txt","r");
    if(fp==NULL)
        printf("File does not exist.\n");

    else
    {
        printf("File exist.\n");
        n = 0;
        while(fscanf(fp,"%s %s %d %d %d",a[n].name, a[n].address, &a[n].grade, &a[n].charge, &a[n].num_room)!=EOF)
            n++;
            for(i=n-1;i>0;i--){
                for(j = 0;j<i;j++){
                    if(a[j].charge>a[j+1].charge){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    }
                }
            }
            printf("\nName   Address   Grade   Charge   Num_room");
            printf("\nEnter any grade: ");
            scanf("%d",&g);
            for(i=0;i<n;i++){
                if(a[i].grade==g)
                printf("\n%s %4s %5d %5d %5d",a[i].name, a[i].address, a[i].grade, a[i].charge, a[i].num_room);
            }
            printf("\nName   Address   Grade   Charge   Num_room");
            printf("\nEnter any value: ");
            scanf("%d",&value);
            for(i=0;i<n;i++){
                if(a[i].charge<=value)
                printf("\n%s %4s %5d %5d %5d",a[i].name, a[i].address, a[i].grade, a[i].charge, a[i].num_room);
            }
    }
    fclose(fp);

}
