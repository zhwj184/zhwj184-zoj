http://acm.zju.edu.cn/show_problem.php?pid=2782


#include <string>
#include <iostream>
using namespace std;
int main()
{
    int cas;
    string s[21],t;
    string A[21],B[21];
    int start[21],end[21],flag[21];
    int i,j,k,m,n;
    int x,y;
    cin >> cas;
    while( cas --)
    {
        cin >> m >> n;
        for(i=0;i<m;i++)
         {
          cin >> s[i];
          flag[i]=0;
          start[i]=0;
          end[i]=0;
         }

        for(j=0;j<n;j++)
        {
            cin >> x >> y;
           // A[x-1]=s[y-1];
            start[x-1]=1;
           // start[y-1]=1;
            end[y-1]=1;
            A[y-1]=s[x-1];
            flag[y-1]=1;
        }
        k=0;
        for(i=0;i<m;i++)
        {
            if(!start[i])
            {
                for(j=k;j<m;j++)
                if(!flag[j])
                {
                  A[j]=s[i];
                  flag[j]=1;
                  start[i]=1;
                  k=j+1;
                  break;
                }
            }
        }
        for(j=0;j<m-1;j++)
         cout << A[j] << " ";
         cout << A[m-1] << endl;
    }
}
