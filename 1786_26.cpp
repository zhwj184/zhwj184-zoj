#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int main()
{
    int i,k,base[31],sum;
    int skew[32];
    base[0]=1;
    skew[0]=0;
    for(i=1;i<31;i++)
    {
        base[i]=2*base[i-1]+1;
        skew[i]=i;
    }
    int cas;
    int flag[100];
    cin >> cas;
     k=0;
     int n;
    while(cas--)
    {
        memset(flag,0,sizeof(flag));
        cin >> sum;
        n=sum;
        k=0;
        while(sum>0)
        {
        for(i=0;i<31;i++)
        {
            if(base[i]>sum) break;
            //cout << base[i] << endl;
        }
        sum-=base[i-1];
        flag[k++]=skew[i-1];
       // cout << flag[k-1] << endl;
        }
        cout << n << " ";
        cout << "[";
        if(n==0) cout << "]" << endl;
        else{
        for(i=k-1;i>0;i--)
         cout << flag[i] << ",";
         cout << flag[0] << "]" << endl;
        }

    }
  }


