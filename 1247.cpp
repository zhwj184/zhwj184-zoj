#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char s[2001];
	int i,j,k,m,n;
	float x,y,t;
    float tt=sqrt(0.5);
	char c1,c2;
	k=0;
	j=0;
	while(cin >> s )
	{
		j++;
		if((strcmp(s,"END"))==0)break;
		k++;
		//if(j==k&&k>1)cout << endl;
		n=strlen(s);
		x=0;
		y=0;
		m=0;
		c1=' ';
		c2=' ';
		for(i=0;i<n;i++)
		{
			if(s[i]==','||s[i]=='.')
			{
				if(c2==' '&&c1!=' ')
				{
					if(c1=='N')
						y+=m;
					else if(c1=='S')
						y-=m;
					else if(c1=='E')
						x+=m;
					else x-=m;
				}
				else
				{
					if(c1=='N'&&c2=='E')
					{
						t= m*tt;//sqrt((double)(m*m/2));
						x+=t;
						y+=t;
					}
					else if(c1=='S'&&c2=='E')
					{
						t=m*tt;//sqrt((double)(m*m/2));
						x+=t;
						y-=t;
					}
					else if(c1=='N'&&c2=='W')
					{
						t=m*tt;//sqrt((double)(m*m/2));
						x-=t;
						y+=t;
					}
					else if(c1=='S'&&c2=='W')
					{
						t=m*tt;//sqrt((double)(m*m/2));
						x-=t;
						y-=t;
					}
				}
				m=0;
				c1=' ';
				c2=' ';
			}
		
			else if(s[i]>='0'&&s[i]<='9')
			{
				m=m*10+s[i]-'0';
			}
			else 
			{
				if(c1!=' ') c2=s[i];
				else c1=s[i];
			}
		}
	//	cout <<"Map #" << k << endl;
	//	printf("The treasure is located at (%.3f,%.3f).\n",x,y);
	//	printf("The distance to the treasure is %.3f.\n",sqrt(x*x+y*y));
     //   cout << endl;
	  printf("Map #%d\n",k);
      printf("The treasure is located at (%.3f,%.3f).\n",x,y);
      printf("The distance to the treasure is %.3f.\n\n",sqrt(x*x+y*y));
	}
}







