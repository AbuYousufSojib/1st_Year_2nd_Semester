#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    int i, l, v=0, c=0, d=0, s=0, o=0;

    printf("Enter a line of text: \n");
    gets(a);

    l=strlen(a);

    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            v++;
        else if(a[i]>='a'&&a[i]<='z')
            c++;
        else if(a[i]>='A'&&a[i]<='Z')
            c++;
        else if(a[i]>='0'&&a[i]<='9')
            d++;
        else if(a[i]==' ')
            s++;
        else
            o++;
    }
    printf("\nVowel     = %d",v);
    printf("\nConsonant = %d",c);
    printf("\nDigit     = %d",d);
    printf("\nSpace     = %d",s);
    printf("\nOther     = %d",o);

    getch();

}
