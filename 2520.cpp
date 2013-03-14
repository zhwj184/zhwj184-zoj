#include <iostream.h>
#include <stdio.h>
#include <math.h>
int main() {
    long s,t,i;
    int j,k,m,n;
    int u=0;
    long A[100],B[100];
    i=11;
    while(u<21) {

        s=1; i++;
        t=(int)sqrt(i);
        for(j=2;j<=t;j++)if(i%j==0)s+=(j+i/j);
        if(t*t==i)s-=t;
        if(i<s) {
             k=1;
             t=(int)sqrt(s);
             for(j=2;j<=t;j++) if(s%j==0)k+=(j+s/j);
             if(t*t==s)k-=t;
             if(k==i) {
                A[u]=i;
                B[u]=s;
                u++;
             }
         }

     }
     while(scanf("%d",&n)!=EOF) {
        printf("%ld %ld\n",A[n-1],B[n-1]);
      }
  }
              
        
