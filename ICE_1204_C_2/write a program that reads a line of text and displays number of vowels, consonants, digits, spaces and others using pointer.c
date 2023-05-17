#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
   char *t;
   int i, l ,v=0, c=0, d=0, s=0, o=0;
   t = (char *)malloc(100 *sizeof(char));

   printf("Enter any line of text: ");
   gets(t);

   l = strlen(t);
   for(i=0; i<l; i++){
   if(*(t+i)=='a' || *(t+i)=='e' || *(t+i)=='i' || *(t+i)=='o' || *(t+i)=='u' || *(t+i)=='A' || *(t+i)=='E' || *(t+i)=='I' || *(t+i)=='O' || *(t+i)=='U')
   v++;
   else if(*(t+i)>='a'&&*(t+i)<='z')
   c++;
   else if(*(t+i)>='A'&&*(t+i)<='Z')
   c++;
   else if(*(t+i)>='0'&&*(t+i)<='9')
   d++;
   else if(*(t+i)==' ')
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


