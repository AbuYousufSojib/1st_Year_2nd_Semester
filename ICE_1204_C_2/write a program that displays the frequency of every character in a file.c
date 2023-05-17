#include<stdio.h>
void main()
{
    char ch;
    int a[256], i;
    FILE *fp;
    for(i=0;i<256;i++)
        a[i]=0;
    fp = fopen("frequency.cpp","r");
    while(fscanf(fp,"%c",&ch)!=EOF)
        a[ch]++;
    for(i =32;i<256;i++)
        if(a[i]>0)
        printf("%c = %d\t",i,a[i]);
    fclose(fp);
}
