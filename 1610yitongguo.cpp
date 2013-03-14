


 #include<iostream.h>
#include <stdio.h>

using namespace std;

int seg[9000];

int main()
{
 int d;
 int mm[9000] ;
 while( (scanf("%d",&d))!= EOF )
 {

  for( int i =0 ;i < 9000;i++)
  {
   seg[i] = -1;
   mm[i]=0;
  }
  int x,y,c;
  int posmax = -10000;
  for( int i = 0;i  < d;i++)
  {
   scanf("%d%d%d",&x,&y,&c);
   if ( posmax < y ) posmax  = y;
   for( int j = x;j<y;j++)
   {
    seg[j] = c;
   }
  }

  int justc =-1;
  for( int i = 0;i < posmax;i++ )
  {
   if ( seg[i] == justc ) continue;
   else
   {
    justc = seg[i];
    if (justc == -1 ) continue;
    if ( justc!= posmax)
     mm[justc]++;
    else
     mm[justc] = 1;
   }
  }
  for (int i =0 ;i<9000;i++)
  {
   if(mm[i]!=0)printf("%d %d\n",i,mm[i]);
  }
  printf("\n");

 }


 return 0;
}


