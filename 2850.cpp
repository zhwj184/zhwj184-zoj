#include <iostream.h>
#include <stdio.h>
int main()
{
    int flag[11][11];
    int i,j,k,m,n;
    int s;
    int count;
    while(cin >> n >> m)
    {
        s=0;
        count=0;
        if(n==0 && m==0) break;

        for(i=0;i<n;i++)
         for(j=0;j<m;j++)
         {
          cin >> flag[i][j];
          if(flag[i][j]==1) count++;
         }
         if(count==n*m)
         {
           cout << "No" << endl;
           continue;
         }
         else if(n==1&&m==1&&flag[0][0]==0){cout << "Yes" << endl;continue;}
         
         else
         {
             for(i=0;i<(n-1);i++)if((flag[i][0]==0&&flag[i+1][0]==0)||(flag[i][m-1]==0&&flag[i+1][m-1]==0)) {s=1;break;}
             for(j=0;j<(m-1);j++) if((flag[0][j]==0&&flag[0][j+1]==0)||(flag[n-1][j]==0&&flag[n-1][j+1]==0)) {s=1;break;}
            for(i=0;i<n&&m>1;i++)
             if(flag[i][0]==0&&flag[i][1]==0) { s=1;break;}
               if(s==1){ cout << "No" << endl;continue;}
            for(j=0;j<m&&n>1;j++)
              if(flag[0][j]==0&&flag[1][j]==0) { s=1;break;}
               if(s==1){ cout << "No" << endl;continue;}
            for(j=0;j<m&&n>1;j++)
              if(flag[n-1][j]==0&&flag[n-2][j]==0) { s=1;break;}
               if(s==1){ cout << "No" << endl;continue;}
            for(i=0;i<n&&m>1;i++)
             if(flag[i][m-1]==0&&flag[i][m-2]==0) { s=1;break;}
              if(s==1){ cout << "No" << endl;continue;}
            for(i=1;i<(n-1);i++)
            {
             for(j=1;j<(m-1);j++)
             {
                if(flag[i][j]==0&&(!flag[i-1][j]||!flag[i+1][j]||!flag[i][j-1]||!flag[i][j+1]))
                {
                    s=1;
                    break;
                }
             }
             if(s==1)break;
            }
             if(s==1){ cout << "No" << endl;continue;}
             cout << "Yes" << endl;
         }
    }
}
            

