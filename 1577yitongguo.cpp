         #include <iostream>
#include <cmath>

using namespace std;

unsigned long gcd(unsigned long a, unsigned long b)
{
     if(a % b == 0)
           return b;
     else
           return gcd(b, a % b);
}

int main()
{
     unsigned long x, y;
     int count;
     while(cin>>x>>y)
     {
           if(y % x != 0)
           {
                 cout<<'0'<<endl;
                 continue;
           }
           int product = y / x;
           count = 0;
           for(int i = 1; i <= product; i++)
           {
                 if(product % i != 0)
                       continue;
                 if(gcd(i, product / i) != 1)
                       continue;
                 count++;
           }
           cout<<count<<endl;
     }

     return 0;
}
