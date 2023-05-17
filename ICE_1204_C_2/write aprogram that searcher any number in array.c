#include <stdio.h>

#define MAX_n 100

int main()
{
    int arr[MAX_n];
    int n, i, search, found;
    printf("Enter n of array: ");
    scanf("%d", &n);

   printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &search);


    found = 0;

    for(i=0; i<n; i++)
    {
        if(arr[i] == search)
        {
            found = 1;
            break;
        }
    }



    if(found == 1)
    {
        printf("\n%d is found at position %d", search, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", search);
    }

    return 0;
}
