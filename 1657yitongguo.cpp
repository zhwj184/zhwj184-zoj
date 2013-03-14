#include <stdio.h>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
  int rnum,ca;
  rnum=(int)sqrt(num);
  for(ca=2;ca<=rnum;ca++)
  {
    if(num%ca==0)
    {   return false;}
  }
  return true;
}

int main()
{
  int ca,temp,n,count;
  while(scanf("%d",&n) && n!=0)
  {
    count=0;
    for(ca=(int)ceil(n/2.0);ca>=2;ca--)
    {
        if(isPrime(ca))
          if(isPrime(n-ca))
            count++;
    }
    printf("%d\n",count);
  }
  return 0;
}
  /*
1397 Goldbach's Conjecture
Time Limit : 1000 ms Memory Limit : 32768 K Output Limit : 256 K

GUN C++
*/
#include <iostream.h>
#include <stdio.h>
#include <math.h>
using namespace std;

const int nMax=32768;
const int pMax=3600;

int prime[pMax]={0},now;

bool isPrime(int num)
{
  int rnum,ca;
  rnum=(int)sqrt(num);
  for(ca=2;ca<=rnum;ca++)
  {
    if(num%ca==0)
    {   return false;}
  }
  return true;
}

int divFind(int num)
{
  int low=0,high=now,mid;
  while(high-low>=0)
  {
    mid=(low+high)/2;
    if(prime[mid]==num)
        return mid;
    else
    {
        if(prime[mid]>num)
        {   high=mid-1;}
        else
        {   low=mid+1;}
    }
  }
  return -1;
}

int main()
{
  int n,ca,pos,count,temp;

  for(ca=2,now=0;ca<=nMax;ca++)
  {
    if(isPrime(ca))
    {   prime[now]=ca;now++;}
  }
  now--;

  while(scanf("%d",&n) && n!=0)
  {
    for(pos=0;pos<=now;pos++)
    {
        if(prime[pos]>=n)
          break;
    }

    count=0;
    for(ca=0;ca<=pos;ca++)
    {
        temp=(int)ceil(n/2.0);
        if(temp<prime[ca])
          break;
        if(divFind(n-prime[ca])>0)
          count++;
    }
    printf("%d\n",count);
  }
  return 0;
}

