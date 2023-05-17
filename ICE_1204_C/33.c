#include<stdio.h>
#include<stdlib.h>
int main(){
int a[10],n,i,j;

printf("Enter the number to convert: ");
scanf("%d",&n);
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\nBinary of Given Number is=");
for(j=i-1;j>=0;j--)
{
printf("%d",a[j]);
}
return 0;
}

