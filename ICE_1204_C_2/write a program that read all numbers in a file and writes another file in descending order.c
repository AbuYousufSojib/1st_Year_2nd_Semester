#include <stdio.h>
void main()
{
    int i, n, a[100],in,out,temp;
    FILE *fi,*fo;
    fi = fopen("num.in","r");
    fo = fopen("num.out","w");
    n=0;
    while(fscanf(fi,"%d",&a[n])!=EOF)
        n++;
    for(out = n-1;out>=0;out--)
        for(in = 0;in<out; in++)
        if(a[in]<a[in+1])
    {
        temp = a[in];
        a[in] = a[in+1];
        a[in+1] = temp;
    }
    for(i=0;i<n;i++)
        fprintf(fo,"%4d",a[i]);
}
