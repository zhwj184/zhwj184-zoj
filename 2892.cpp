#include<iostream>
#include<cctype>
#include<cstring>
#include <cstdio>
#include <cmath>
using namespace std;

int repeat;
int org[266],res[266];
int s[266],d[266];

int main()
{
    int n,i,j,k,m;
    while( cin >> n && n)
    {
        repeat=0;
        m=n;
        while( m ) {
            repeat++;
            m/=2;
        }
        repeat--;
        //cout << "n=" << repeat << endl;
        
        for(i=1;i<=n;i++)
            scanf("%d",&org[i]);
        //k=n/2;
        
        int t=1;
        for(k=1;k<=n;k++)
                res[k]=org[k];
        for(j=1;j<=repeat;j++)
        {
            for( k=1;k<=t;k++)
            {
                res[2*k]=(org[k]-org[k+t])/2;
                res[2*k-1]=(org[k]+org[k+t])/2;
            }
            t*=2;
            for(k=1;k<=n;k++)
                org[k]=res[k];

        }
              for(k=1;k<n;k++)
                printf("%d ",res[k]);
             printf("%d\n",res[n]);
       // for(k=1;k<n;k++)
        //    printf("%d ",res[k]);
        //    printf("%d\n",res[n]);
    }
}
                


        


