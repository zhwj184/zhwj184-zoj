#include<stdio.h>
#include<iostream.h>
#include<string.h>
main()
{

    int p[101],m[101][101],s[101][101];
    int i,j,k,n;
    int a;
    while(cin>>a)
    {
        for(i=0;i<a;i++)
        cin>>p[i];
        n=a-1;
        for(i=1;i<=n;i++)m[i][i]=0;
        for(int r=2;r<=n;r++)
          for(i=1;i<=n-r+1;i++){
            j=i+r-1;
            m[i][j]=m[i+1][j]+p[i-1]*p[i]*p[j];
            s[i][j]=i;
            for(k=i+1;k<j;k++)
            {
                int t=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(t<m[i][j])
                {
                    m[i][j]=t;
                    s[i][j]=k;
                }
            }
          }
            cout<<m[1][n]<<endl;
    }
}
