#include <iostream.h>
#include <stdio.h>
int main()
{
    int b;
    int s[101][101];
    int t[101][101];
    int i,j,k,m,n;
    int a=0;
    while(cin >> n >> m)
    {
        a++;
        if(n==0 && m==0) break;
        for(i=0;i<n;i++)
          for(j=0;j<m;j++)
           t[i][j]=0;
        for(k=0;k<3;k++)
        {
            for(i=0;i<n;i++)
             for(j=0;j<m;j++)
              {
                cin >> b;
                t[i][j]+=b;
              }
        }
        cout <<"Case " << a << ":" << endl;
        for(i=0;i<n;i++)
        {
          for(j=0;j<(m-1);j++)
            cout << t[i][j]/3 << ",";
            cout << t[i][m-1]/3 << endl;
        }
    }
}
