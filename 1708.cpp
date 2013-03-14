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
  int loop;
  while(cin >> row >> col >> num)
  {
	  if(row==0&&col==0&&num==0)
		  break;
	  for(i=0;i<row;i++)
		  for(j=0;j<col;j++)
		  {
			  cin >> s[i][j];
			  A[i][j]=1;
			  count[i][j]=0;
		  }
      int flag=1;
	  m=0;n=num-1;
	  count[0][n]=1;
	  loop=0;k=1;
	  while(1)
	  {
		  if(s[m][n]=='S')
		  {				

				  m++;

			  }
		
		  else if(s[m][n]=='N')
		  {
				
				  m--;
				
			  }
		
		   else if(s[m][n]=='E')
		  {
			
				
				  n++;
		
			  }
		
		    else if(s[m][n]=='W')
		  {
			
				
				  n--;
				  
				
		  }
                                    if(m<0||m>=row||n<0||n>=col){flag=1;break;}
            if(count[m][n]>0){flag=0;loop=count[m][n]-1; break;}
                k++;
		    count[m][n]=k  ;
		
		  }

	    if(flag)cout<<k<<" step(s) to exit" << endl;
		else cout<<loop<<" step(s) before a loop of "<<k-loop<<" step(s)"<<endl;
	  }
  }
