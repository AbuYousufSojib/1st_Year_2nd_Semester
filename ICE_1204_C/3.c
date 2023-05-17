#include <stdio.h>
int main()
{
    int dd, mm, yyyy;
    printf("Enter the date, month, year:");
    scanf("%d %d %d", &dd, &mm, &yyyy);
    printf("%d-%d-%d\n",dd,mm,yyyy);
    printf("%d/%d/%d\n",dd,mm,yyyy);
    printf("%d %d %d\n",dd,mm,yyyy);
    printf("%d,%d,%d\n",dd,mm,yyyy);
    return 0;
}
