                                                      #include<stdio.h>
#include<iostream.h>
main()
{
    int m,n;
    int A[101][101];
    int s[101],t[101];
    while(cin>>m)
    {
        if(m==0)break;
        for(int i=1;i<=m;i++)
         {
            s[i]=0;
         for(int j=1;j<=m;j++)
          {
           cin>>A[i][j];
           s[i]+=A[i][j];
          }
         }
         for(int i=1;i<=m;i++)
         {
            t[i]=0;
            for(int j=1;j<=m;j++)
            {
                t[i]+=A[j][i];
            }
         }
         int count=0;
         int flag=0;
         int p,q;
         for(int i=1;i<=m;i++)
         {
            for(int j=1;j<=m;j++)
            {
            if(s[i]%2==1&&t[j]%2==1)
            {
                p=i;
                q=j;
                flag=1;
                count++;
            }
            if(count>1)break;
            }
            if(count>1&&flag) break;
         }
         int count1=0;
         int flag1=0;
           for(int i=1;i<=m;i++)
         {
            if(count==1)break;
            for(int j=1;j<=m;j++)
            {
            if(s[i]%2==0&&t[j]%2==1)
            {
                p=i;
                q=j;
                flag1=1;
                count1++;
            }
            if(count1>1)break;
            }
            if(count1>1&&flag1) break;
         }
         if(flag==0&&count1==0)cout<<"OK\n";
         if(flag==1&&count==1)printf("Change bit (%d,%d)\n",p,q);
         if(count1>1)cout<<"Corrupt\n";


    }
}





