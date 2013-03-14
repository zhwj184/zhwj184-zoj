 #include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
double A[101][10];
int n,k;
int main()
{
    int i,j;
    while( cin >> k )
    {
        cin >> n;
        k++;
        for(i=0;i<n;i++)
            for(j=0;j<k;j++)
                A[i][j]=0.0;
        for(i=0;i<k;i++)
            A[0][i]=100.0/k;
        for(i=1;i<n;i++){
            for(j=0;j<k;j++)
                A[i][j]+=A[i-1][j]/k;
            for(j=1;j<k;j++)
                A[i][j]+=A[i-1][j-1]/k;
            for(j=0;j<k-1;j++)
                A[i][j]+=A[i-1][j+1]/k;
        }
        double s=0;
        for(i=0;i<k;i++)
            s+=A[n-1][i];
        printf("%.5lf\n",s);
    }
}
