#include<math.h>
#include<iostream.h>
#include<stdio.h>
main()
{
    int n;
    float A[10001];
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        cin>>A[i];
         float temp;
        for(int i=0;i<(n-1);i++)
         for(int j=i+1;j<n;j++)
         {
            if(A[i]<A[j])
            {

                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
         }
         float s;
         s=A[n-1];
         for(int i=n-2;i>=0;i--)
         s=2*sqrt(s*A[i]);


         printf("%.3f\n",s);
    }
}
                 #include <iostream>
               #include<stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;
void Qsort(double *a,int l,int r){
        if (l >= r) return;
        int i = l;
        int j=r+1;
        double temp=a[l];
        while(true){
                do{
                        i++;
                }while(a[i]<temp);
                do{
                        j--;
                }while(a[j]>temp);
                if(i>j)break;
                double temp2=a[i];
                a[i]=a[j];
                a[j]=temp2;
        }
        a[l]=a[j];
        a[j]=temp;
        Qsort(a,l,j-1);
        Qsort(a,j+1,r);
}

int main()
{
 double a[1000];
 int n;
 while(cin>>n)
 {
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
 Qsort(a,0,n-1);

 double s=a[n-1];
 for(int i=n-2;i>=0;i--)
 {
  s=2*sqrt(s*a[i]);
 }
 printf("%.3lf\n",s);
 }
}

