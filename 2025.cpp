#include <iostream>
  #include <cstdio>
  using namespace std;
  int main()
  {
    long num[50001];
    long n,k;
    long i,j;
    long s,t;
    while(cin >> n >> k)
    {
      if(n==-1&&k==-1) break;
      i=2;
      while(i<=n&&(i*(i-1)/2)<k)
         i++;
      i--;
       int pos = 0;
 /* int k = n+1-i;
 int lt = m - i*(i-1)/2;
 for (int w=1;w<k-1;w++,pos++)
  ans[pos] = w;
 ans[pos++] = k-1+lt;
 for (int w=n;w>=k-1;w--){
  if (w!=(k-1+lt))
   ans[pos++] = w;
      s=1; */
      //cout << i << endl;
      t=k-(i*(i-1)/2);
      
      for(j=1;j<n-i;j++,pos++)
      {
          num[pos]=j;
      }
      num[pos++]=n-i+t;
      s=n;
      for(s=n;s>=n-i;s--)
      {
         if(s!=n-i+t)num[pos++]=s;
        // cout << num[j] << endl;
      }
     // for(j=1;j<n-i;j++)
     //  num[j]=j;
       /*s=1;
      // cout << t << endl;
       i=n-i+1;
       s=num[i];
       for(j=1;j<=t;j++)
       {
          num[i]=num[i+1];
          i++;
       }
       num[i]=s;
      /*if(t==0) {
          num[1]=0;
          s=n;
          for(i=2;i<=n;i++)
          num[i]= s--;
       }*/
      for(i=0;i<n-1;i++)
       printf("%ld ",num[i]);
      cout << num[n-1] << endl;
    }
  }
