#include "iostream"
#include "string.h"
#include <stdio.h>
#include "ctype.h"

using namespace std;


//简单DP,最长有序串
//2006-07-29 06:03:20 Accepted 2136 C++ 00:00.02 840K Time Limit Exceeded
int main ()
{
     int i,j,k;
     int n,n1;
     int max;
     int a[1001];
     int b[1001];
     cin>>n1;
     getchar();
     for(j=0;j<n1;j++)
     {
         getchar();
         cin>>n;
         for(i=0;i<n;i++)
         {   cin>>a[i];b[i]=1;}
         getchar();
         max=1;
         for(i=0;i<n;i++)
          for(k=i-1;k>=0;k--)
          {
            if(a[k]<a[i]&&b[k]+1>b[i])
            {
                b[i]=b[k]+1;
                if(max<b[i])max=b[i];
            }
          }
          if(j!=0)cout << endl;
          cout << max << endl;
     }
}

