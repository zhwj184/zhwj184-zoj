#include<stdio.h>
int main()
{
    long n, k, i, temp, KK;
    double res;
    while(scanf("%ld%ld",&n,&k), n||k )
    {
        KK=n-k;
        if( k<KK )
        {
            temp=k;
            k=KK;
            KK=temp;
        }
        for( i=1, res=1; i<=KK; i++)
            res*=(k+i+0.0)/i;
        printf("%.0lf\n",res);
    }
    return 0;
}
