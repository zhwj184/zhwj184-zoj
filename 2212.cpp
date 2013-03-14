#include <stdio.h>
#include <iostream.h>
#include <ctype.h>
#include <string.h>
int main()
{
  char s[11][11];
  int row,col,num;
  int count[11][11];
  int A[11][11];
  int i,j,k,m,n;
  while(cin >> row >> col >> num)
  {
	  if(row==0&&col==0&&num==0)
		  break;
	  for(i=0;i<row;i++)
		  for(j=0;j<col;j++)
		  {
			  cin >> s[i][j];
			  A[i][j]=1;
		  }
      int flag=1;
	  m=0;n=num;
	  count[0][n]=0;
	  loop=0;k=0;
	  while(flag)
	  {
		  if(A[m][n]=='S')
		  {
			  if(m+1>=row||A[m][n]==0)flag=0;
			  else {  
				  A[m][n]=0;
				  m++;
				  k++;
				  count[m][n]=k;
				
			  }
		  }
		  else if(A[m][n]=='N')
		  {
			  if(m-1<0||A[m][n]==0)flag=0;
			  else {
				  A[m][n]=0;
				  n--;
				  k++;
				  count[m][n]=k;
			  }
		  }
		   else if(A[m][n]=='E')
		  {
			  if(n-1<0||A[m][n]==0)flag=0;
			  else {
				  A[m][n]=0;
				  n--;
				  k++;
				  count[m][n]=k;
			  }
		  }
		    else if(A[m][n]=='S')
		  {
			  if(n+1>=col||A[m][n]==0)flag=0;
			  else {
				  A[m][n]=0;
				  n++;
				  k++;
				  count[m][n]=k;
			  }
		  }
	    if(m==0||m==row-1||n==0||n==col-1)cout<<k<<" step(s) to exit" << endl;
		else cout<<k<<" step(s) before a loop of "<<k-count[m][n]<<" step(s)"<<endl;
	  }
  }

