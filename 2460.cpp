#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double sum;
    int n,m;
    int a[101];
    int i;
    while( cin >> n )
    {
       cin >> m;
       for(i=0;i<n;i++)
            cin >> a[i];
            
       sum=0;
       if(m%2!=0)
       {
            for(i=0;i<n;i++)
                if(a[i]>0)
                    sum+=pow(a[i]*1.0,m*1.0);
        }
       
        else 
        {
          for(i=0;i<n;i++)
                    sum+=pow(a[i]*1.0,m*1.0);
        }
        
        cout << (int) sum << endl;
      }
 }