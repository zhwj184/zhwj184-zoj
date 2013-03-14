#include<iostream.h>
#include<stdio.h>
int main ()
{
    int i,j,k;
    double a[6][6],t,num;
    int s[11],T,n,m;
    int Case=1;
    scanf("%d",&T);getchar();
    for(i=0;i<T;i++)
    {
        getchar();
        for(j=1;j<=5;j++)
        {
            for(k=1;k<=5;k++)
            {
                scanf("%lf",&a[j][k]);
            }
            getchar();
        }
        if(Case!=T) printf("\n");
        Case++;
        while(1)
        {
            scanf("%d",&n);
            if(n==0) break;
            for(j=0;j<n;j++)
            {
                scanf("%d",&s[j]);
            }
             scanf("%lf",&t);getchar();
            m=1;
            for(j=0;j<n;j++)
            {
                t*=a[m][s[j]];
                t+=0.005;
                t*=100;
                t=(int)t;
                t/=100.0;
                m=s[j];
            }
              t*=a[m][1];
            t+=0.005;t*=100.0;t=(int)t;t/=100.0;

            
            printf("%.2lf\n",t);
        }
    }
    return 1;
}

#include "iostream"

using namespace std;

//2006-11-28 23:52:54 Accepted 1058 C++ 00:00.00 836K Time Limit Exceeded
//简单的模拟题

int main ()
{
    int i,j,k;
    double a[6][6],t,num;
    int s[11],T,n,m;
    int Case=1;
    scanf("%d",&T);getchar();
    for(i=0;i<T;i++)
    {
        getchar();
        for(j=1;j<=5;j++)
        {
            for(k=1;k<=5;k++)
            {
                scanf("%lf",&a[j][k]);
            }
            getchar();
        }
        if(Case!=1) printf("\n");
        Case++;
        while(1)
        {
            scanf("%d",&n);
            if(n==0) break;
            for(j=0;j<n;j++)
            {
                scanf("%d",&s[j]);
            }
            scanf("%lf",&t);getchar();
            num=t;
            m=1;
            for(j=0;j<n;j++)
            {
                t*=a[m][s[j]];
                t+=0.005;t*=100.0;t=(int)t;t/=100.0;
                m=s[j];
            }
            t*=a[m][1];
            t+=0.005;t*=100.0;t=(int)t;t/=100.0;
            printf("%.2lf\n",t);
        }
    }
    return 1;
}



