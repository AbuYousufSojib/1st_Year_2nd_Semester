#include <stdio.h>
void main()
{
    char t;
    int l = 0, u = 0, d = 0, s = 0, o = 0, li = 0;
    FILE *fp;
    fp = fopen("def.txt","r");
    while(fscanf(fp,"%c",&t)!=EOF){
        if(t>='a'&&t<='z')
            l++;
        else if(t>='A'&&t<='Z')
            u++;
        else if(t>='0'&&t<='9')
            d++;
        else if(t== ' ')
            s++;
        else if(t== '\n')
            li++;
        else
            o++;
    }
    fclose(fp);
    printf("\nLower   = %d",l);
    printf("\nUpper   = %d",u);
    printf("\nDigit   = %d",d);
    printf("\nSpace   = %d",s);
    printf("\nLine    = %d",li);
    printf("\nOther   = %d",o);
    getch();
}
