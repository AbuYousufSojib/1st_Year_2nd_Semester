#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
   char t[100];
   int i, l ,v=0, c=0, d=0, s=0, o=0;

   printf("Enter any line of text: ");
   gets(t);

   l = strlen(t);
   for(i=0; i<l; i++){
   if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u' || t[i]=='A' || t[i]=='E' || t[i]=='I' || t[i]=='O' || t[i]=='U')
   v++;
   else if(t[i]>='a'&&t[i]<='z')
   c++;
   else if(t[i]>='A'&&t[i]<='Z')
   c++;
   else if(t[i]>='0'&&t[i]<='0')
   d++;
   else if(t[i]==' ')
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

