#include <stdio.h>
#include <string.h>
#define N 32768
#define d 181
int Square[d+1],Sum[N+1];
int i,j,k,w,n,p;

int main()
{
  for(i=0;i<=d;i++)  Square[i]=i*i;
  for(i=0;i<=d;i++){
    for(j=i;j<=d;j++){
      p=Square[i]+Square[j];
      if(p>N) break;
      for(k=j;k<=d;k++){
        p=Square[i]+Square[j]+Square[k];
        if(p>N) break;
        for(w=k;w<=d;w++){
          p=Square[i]+Square[j]+Square[k]+Square[w];
          if(p>N) break;
          Sum[p]++;
        }
        //p-=Square[w];
      }
      //p-=Square[k];
    }
    //p-=Square[j];
  }

  while(scanf("%d",&n)!=EOF && n){
    printf("%d\n",Sum[n]);
  }
    return 0;
}

