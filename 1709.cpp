#include <iostream.h>
char a[101][101];
int n,m;
int dir[8][2]={{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
void deposit(int x,int y)
{
   int i,p,q;
   a[x][y]='*';
   for(i=0;i<8;i++)
   {
      p=x+dir[i][0];
      q=y+dir[i][1];
      if(p<0||q<0||p>=n||q>=m)
         continue;
      if(a[p][q]=='@')deposit(p,q);
   }
}
int main()
{
   int i,j,count;
   while(1)
   {
          count=0;
          cin>>n>>m;
          if(n==0||m==0)break;
       for(i=0;i<n;i++)
                 for(j=0;j<m;j++)
                            cin>>a[i][j];
          for(i=0;i<n;i++)
              for(j=0;j<m;j++)
                 {
                        if(a[i][j]=='@')
                        {
                                   deposit(i,j);
                                   count++;
                        }
                 }
          cout<<count<<endl;
   }
   return 0;
}
