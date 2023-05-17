
#include<stdio.h>
void main()
{
    char a;
    FILE *fp;
    fp = fopen("lower.txt","r");
    if(fp==NULL)
    {
        printf("File doesn't exist.\n");
    }
    else
    {
        printf("File exist.\n");
        while(fscanf(fp,"%c",&a)!=EOF)
        {
            if(a>='A'&&a<='Z')
            {
                printf("%c",a+32);
            }
            else
            {
                printf("%c",a);
            }
        }
    }
    fclose(fp);
}
