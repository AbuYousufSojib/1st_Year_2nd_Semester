#include <stdio.h>
#include <string.h>

void main()
{
    int i, j = 0, k = 0;
    char str[100], temp;

    printf("enter the string:");
    scanf("%s", str);
    printf("\nAfter reversing the string is: %s",strrev(str));

/* ignores spaces */
    for (i = 0; str[i]!= '\0';i++)
    {
        if (str[i] == ' ')
        {
            for (j = i;str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
        }
    }


/* sorts the string */
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; str[j] != '\0';j++)
        {
            if (str[j] > str[i])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("\nThe sorting string is: %s", str);

}
