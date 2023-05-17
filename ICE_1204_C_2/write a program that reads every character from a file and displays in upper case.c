#include<stdio.h>
void main()
{
    char a;
    FILE *fp;
    fp = fopen("upper.txt","r");

    while(fscanf(fp,"%c",&a)!=EOF){
        if(a>='a'&&a<='z')
            printf("%c",a-32);
        else
            printf("%c",a);
        }
    fclose(fp);

}
