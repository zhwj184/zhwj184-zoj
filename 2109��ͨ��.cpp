#include<iostream.h>
#include<stdio.h>
using namespace std;
main()
{
    int m,n;
    int A[1001],B[1001];
    double C[1001];
    double s;
    int k;
    while(cin>>m>>n)
    {
        s=0;
        if(m==-1&&n==-1)break;
        for(int i=0;i<n;i++)
        {
         cin>>A[i]>>B[i];
         C[i]=1.0*A[i]/(float)B[i];
        }
        for(int i=0;i<(n-1);i++)
         for(int j=i+1;j<n;j++)
         {
            if(C[i]<C[j])
            {
                int temp;
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
                temp=B[i];
                B[i]=B[j];
                B[j]=temp;
                float t;
                t=C[i];
                C[i]=C[j];
                C[j]=t;
            }
         }
          k=0;
         for(k=0;k<n;k++)
         {
            if(m==0)break;
            if(m>=B[k]){m-=B[k];s+=A[k];}
            else {s+=A[k]*m*1.0/(float)B[k];m=0;}
         }
         printf("%.3f\n",s);
    }
}
