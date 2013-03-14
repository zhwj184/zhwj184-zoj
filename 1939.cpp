#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

char a[1000][50],b[1001][50];
int tab[1000][1000];
int an,bn;
int i,j,k;

void solve()
{
    for(i=0;i<=bn;i++)
     tab[an][i]=0;
    for(j=0;j<=an;j++)
     tab[j][bn]=0;
    for(i=an-1;i>=0;i--)
      for(j=bn-1;j>=0;j--)
      {
        if(strcmp(a[i],b[j])!=0)
        {
            if(tab[i][j+1]>tab[i+1][j])
                tab[i][j]=tab[i][j+1];
            else
                tab[i][j]=tab[i+1][j];
        }
        else
        {
            tab[i][j]=tab[i+1][j+1]+1;
        }
      }
      //cout << tab[0][0] << endl;
      i=0;
      j=0;
      while(tab[i][j])
      {
        if(strcmp(a[i],b[j])==0)
         {
           cout <<a[i] ;
           if(tab[i][j]>1) cout << " ";
           else cout <<  endl;
           i++;
           j++;
         }
        else if(tab[i+1][j]>tab[i][j+1])
            i++;
        else j++;
      }
}

int main()
{
    while(cin >> a[0])
    {
    for(an=1;;an++)
    {
        cin >> a[an];
        if(strcmp(a[an],"#")==0)
            break;
    }
    for(bn=0;;bn++)
    {
        cin >> b[bn];
        if(strcmp(b[bn],"#")==0)
            break;
    }
    solve();
    }
}
    
