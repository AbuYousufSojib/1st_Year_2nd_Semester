#include <stdio.h>
void main()
{
    int i;
    FILE *fp;

    fp = fopen("abc.txt","w");
    for(i=1; i<=10; i++)
        fprintf(fp,"%4d",i);
    fclose(fp);
}
