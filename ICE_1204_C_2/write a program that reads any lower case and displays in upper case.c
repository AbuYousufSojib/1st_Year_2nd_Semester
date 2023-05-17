#include <stdio.h>
int main()
{
    char ch;
    printf("Enter lower case letter: ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        ch = ch-32;
    }
    printf("Uppercase is %c\n", ch);
    return 0;
}
