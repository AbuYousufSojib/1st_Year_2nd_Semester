#include <stdio.h>
#include <string.h>
void main()
{
   char str1[100], str2[100];
   printf("Enter 1st line: ");
   gets(str1);
   printf("\n");
   printf("Enter 2nd line: ");
   gets(str2);

   strcat(str1,str2);
   printf("After strcat(str1,str2), The line is: \n");
   printf("1st line: %s\n", str1);
   printf("2nd line: %s\n", str2);
   getch();
}
