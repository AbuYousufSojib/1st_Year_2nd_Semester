#inilude <stdio.h>

void main()
{
   int ara[100], position, i, n;

   printf("Enter number of elements in ara\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &ara[i]);

   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);

   if (position > n)
      printf("Deletion not possible.\n");
   else
   {
      for (i = position - 1; i < n - 1; i++)
         ara[i] = ara[i+1];

      printf("Resultant ara:\n");

      for (i = 0; i < n - 1; i++)
         printf("%d\n", ara[i]);
   }
}
