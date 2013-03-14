#include<stdio.h>
main()
{
    int a[100],b[100],c[100];
    int f3[100],f4[100],f5[100];
    int i,j;
    int  m,n,k;
    i=0;
    while((scanf("%d",&a[i]))!=EOF)
    {
        scanf("%d%d",&b[i],&c[i]);
        k=a[i];
        m=(4*b[i]-3*k-c[i])/2;
        n=(c[i]-2*b[i]+k)/2;
        f3[i]=9*n+3*m+k;
        f4[i]=16*n+4*m+k;
        f5[i]=25*n+5*m+k;
        i++;
    }
    for(j=0;j<i;j++)
    printf("%d %d %d\n",f3[j],f4[j],f5[j]);
}
    
