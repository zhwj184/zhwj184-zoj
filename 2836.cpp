#include "iostream"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
using namespace std;


int c[101];
int flag[101];
int n,m;
int num;

//2007-05-19 20:21:55 Accepted 2836 C++ 00:00.06 840K Time Limit Exceeded

int compute( int *a,int b)
{
 int i;
 for(i=*a ;  ; i++ )
  if( i%(*a)==0 && i%b == 0 )
  {
   *a = i;
   return *a;
  }

 //*a= (*a) * b;
 return *a;
}

int dfs(int key,int nn ,int nu,int j )
{
 int i,k;

 if(nn==nu)
 {
  if( key <= m )
  {
   if(nu%2==0)
    num -= m/key;
   else
    num += m/key;
  }
  return 1;
 }

 for( i=j ; i<n ; i++ )
 {
  if( flag[i]==0 )
  {
   k= key;
   compute( &k,c[i] );

   flag[i] = 1;

   dfs( k,nn+1,nu,i+1 );

   flag[i] = 0;
  }
 }
 return 1;
}


int main ()
{
 int i;


 //freopen("in.txt","r",stdin);

 for(;scanf("%d%d",&n,&m)!=EOF;)
 {
  for(i=0 ; i<n ; i++)
   scanf( "%d", &c[i] );

  num = 0;

  //for(i=0 ; i<n ; i++ )
  // num += m/c[i] ;

  memset( flag,0,sizeof(flag) );

  int j;

  for(i=1 ; i<=n ; i++)
  {
   //for( j=0 ; j<n ; j++ )
    dfs( 1,0,i,0 );
  }

  printf( "%d\n",num );

 }
 return 1;
}


