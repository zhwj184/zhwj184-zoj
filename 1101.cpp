                      #include "iostream"
#include "stdlib.h"
#include <stdio.h>


using namespace std;

//2006-12-05 00:36:09 Accepted 1101 C++ 00:00.71 856K Time Limit Exceeded
//这个是O(n^3logn)的算法，比较差的算法
//需要枝减，用二分查找+排序，可以达到0.03秒

int min(void const *a,void const *b)
{
    int *c=(int *)a;
    int *d=(int *)b;
    return  *c-*d;
}

int main ()
{
    int i,j,k,t;
    int n,flag;
    long int d[1001];
    for(;scanf("%d",&n)!=EOF&&n!=0;)
    {
        for(i=0;i<n;i++)
            scanf("%ld",&d[i]);
        qsort(d,n,sizeof(d[0]),min);
        flag=0;
        for(i=n-1;i>=0;i--)
        {
            for(j=n-1;j>=0;j--)
                if(i==j)continue;
                else
                {
                    for(k=0;k<j;k++)
                        if(k==j)continue;
                        else
                        {
                            for(t=0;t<k;t++)
                                if(t==k)continue;
                                else
                                {
                                    if(d[i]==d[j]+d[k]+d[t])
                                    {
                                        flag=1;
                                        printf("%ld\n",d[i]);
                                        break;
                                    }
                                }
                            if(flag==1)
                                break;
                        }
                    if(flag==1)
                        break;
                }
            if(flag==1)
                break;
        }
        if(flag==0)
            printf("no solution\n");

    }
    return 1;
}

