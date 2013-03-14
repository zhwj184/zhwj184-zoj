#include <iostream.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
	int W,H,w,h;
	char s[61][61],t[61][61];
	int i,j,k,m,n;
	int count;
	int flag;
	while( (scanf("%d",&W))!=EOF)//cin >> W )
	{
		scanf("%d%d%d",&H,&w,&h);
		getchar();
      //cin >> H >> w >> h;
	  for(i=0;i<W;i++)
	  {
		  for(j=0;j<H;j++)
			  scanf("%c",&s[i][j]);
		  getchar();
	  }

			 // cin >> s[i][j];
	  for(i=0;i<w;i++)
	  {
		  for(j=0;j<h;j++)
			  scanf("%c",&t[i][j]);
			  //cin >> t[i][j];
	      getchar();
	  }
	  count=0;
	  for(i=0;i<=W-w;i++)
		  for(j=0;j<=H-h;j++)
		  {
			  flag=0;
			  for(m=0;m<w;m++)
			  {
				  for(n=0;n<h;n++)
				  {
					  if(t[m][n]!='.'&&s[i+m][j+n]!=t[m][n])
					  {
						  flag=1;
						  break;
					  }
				  }
				  if(flag)break;
			  }
			 if(!flag)count++;
		  }
    printf("%d\n",count);
	// cout << count << endl;
	}
}

