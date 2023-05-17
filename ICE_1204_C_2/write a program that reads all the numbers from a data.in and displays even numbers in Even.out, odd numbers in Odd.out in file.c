
#include <stdio.h>
void main()
{
    FILE *fin, *fe, *fo;
    int n;
    fin= fopen("Data.in","r");
    fe = fopen("Even.out","w");
    fo = fopen("Odd.out","w");
    while(fscanf(fin,"%d",&n)!=EOF)
        if(n%2==0)
            fprintf(fe,"%4d",n);
        else
            fprintf(fo,"%4d",n);

    fclose(fin);
    fclose(fe);
    fclose(fo);
    getch();

}
