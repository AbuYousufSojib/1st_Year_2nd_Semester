#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
   char *str, ch;
   int i, frequency = 0;
   str = (char *)malloc(1000 * sizeof(char));

   printf("Enter a string: ");
   gets(str);

   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch);

   for(i = 0; *(str+i) != '\0'; ++i)
   {
       if(ch == *(str+i))
           ++frequency;
   }

   printf("Frequency of %c = %d", ch, frequency);

}

