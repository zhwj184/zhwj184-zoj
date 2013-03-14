#include<iostream.h>
#include<stdio.h>
#include <cmath>
int isprime(int n) {
    int i;
    for(i=2;i<=(int)sqrt(n);i++)
    if(n%i==0)return 0;
    return 1;
}
int main() {
    int n;
    while(cin>>n&& n!=0)
    {
        int d,flag;
        double ans;
        if (isprime(n))
        ans = n-1;
        else
        {
            ans=n;
            d=2;
            while(n!=1)
            {
                flag=0;
                while(n%d==0)
                {
                    flag=1;
                    n/=d;

                }
                if(flag)
                   ans*=(double)(1-(double)1/(double)d);
                else
                {
                if(d==2)d++;
                else d+=2;
                }
            }
        }
         printf("%.0lf\n",ans);
    }
  }

