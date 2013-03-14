
#include<stdio.h>
  int n;
    int a[4097];
int sum(int p,int a[])
{
    int i;
    int m=0;

    for(i=p;i<=4096;i++)
      if(a[i]==1)m++;
      else break;
    for(i=p-1;i>0;i--)
      if(a[i]==1)m++;
      else break;
    return m;
}
int main()
{
    int t;


     //cin >> t;
     scanf("%d",&t);
     int k;
     int s,j;
     while(t--)
     {
     for( j=1;j<=4096;j++)
        a[j]=0;
        s=0;
        scanf("%d",&n);
        for( j=0;j<n;j++)
        {
            scanf("%d" ,&k);
            if(a[k]==0)a[k]=1;
            else a[k]=0;
            if(s<sum(k,a))s=sum(k,a);
        }
         printf("%d\n",s);
        //cout << s << endl;
     }
}
