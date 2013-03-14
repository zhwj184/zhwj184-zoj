#include <iostream.h>
int main()
{
    long long i,k,n;
    long long  A[100001];
    n=0;
    for(i=1;;i++)
     {
        if(i%3==0||i%5==0)
          A[n++]=i;
          if(n>100000)break;
     }
     while(cin>>k)
     cout<< A[k-1] << endl;
}


