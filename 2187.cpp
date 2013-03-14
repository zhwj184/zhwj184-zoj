#include <iostream.h>
#include <string.h>
#include <ctype.h>
int main()
{
     char org[10][10];
     char des[10][10];
     int r,c;
     int i,j,k;
     int m,n;
     char s[20];
     char t[20];
     while(cin >> s)
     {
          if(strcmp(s,"ENDOFINPUT")==0) break;
          cin >> r >> c;
          for(i=0;i<r;i++)
            for(j=0;j<c;j++)
              cin >> org[i][j];
          cin >> t;
          m=r-1;
          n=c-1;
          for(i=0;i<m;i++)
           for(j=0;j<n;j++)
           {
              
des[i][j]=((org[i][j]-'0')+(org[i+1][j]-'0')+(org[i][j+1]-'0')+(org[i+1][j+1]-'0')
)/4+'0';
           }
           for(i=0;i<m;i++)
           for(j=0;j<n;j++)
           {
               cout << des[i][j];
               if(j==n-1) cout << endl;
           }
     }
}
