#include <stdio.h>
int main()
{
    int n1, n2, reminder;
    printf("Enter the two number:\n");
    scanf("%d %d", &n1, &n2);
    //n1 must be greater than n2
    reminder = n1%n2;
    printf("The reminder of that two number is: %d\n", reminder);
    return 0;
}
