#include<stdio.h>
#include<iostream.h>
int dis[21][21],adj;
void floyd()
{
     int i,j,k;
    for(k=1;k<21;k++)
    {
          for(i=1;i<21;i++)
          for(j=1;j<21;j++)
          if(dis[i][j]>dis[i][k]+dis[k][j])
          dis[i][j]=dis[i][k]+dis[k][j];
    }
}

int main()
{
    int i,j,k,m,n;
    int t=1,s;
    int A[101],B[101],C[101];
    while(cin >> s )
    {
        for(i=1;i<21;i++)
         for(j=1;j<21;j++)
          dis[i][j]=1000;
          
        for(i=0;i<s;i++)
         {
            cin >> k;
            dis[1][k]=1;
            dis[k][1]=1;
         }
         
        for(i=2;i<=19;i++)
        {
            cin >> n;
            for(j=0;j<n;j++)
            {
            cin >> k;
            dis[i][k]=1;
            dis[k][i]=1;
            }
        }
        floyd();
        cin >> n;
        cout << "Test Set #" << t << endl;
        for(i=0;i<n;i++)
        {
            cin >> m >> k;
            cout << m << " to " << k << ": " << dis[m][k] << endl;
        }
        cout << endl;
        t++;
    }
}
            

