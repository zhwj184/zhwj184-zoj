#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int grid[27][27];
int i,j,k,m,n;
char test[4];
char c1,c2;

int main()
{
	int cas;
	int s,t;
	cin >> cas;
	for(int p=0;p<cas;p++)
	{
		cin >> m;
		memset(grid,0,sizeof(grid));
		for(i=0;i<m;i++)
		{
			cin >> test;
			c1=test[0];
			c2=test[2];
			s=c1-'A';
			t=c2-'A';
			if(test[1]=='<')
			{
				grid[s][t]=1;
				for(j=0;j<27;j++)
					for(k=0;k<27;k++)
						if(grid[j][s]!=0&&grid[s][k]!=0&&grid[j][k]!=1)
							grid[j][k]=2;
				for(j=0;j<27;j++)
					for(k=0;k<27;k++)
						if(grid[j][t]!=0&&grid[t][k]!=0&&grid[j][k]!=1)
							grid[j][k]=2;
			}
			else
			{
				int q=s;s=t;t=q;
				grid[s][t]=1;
				for(j=0;j<27;j++)
					for(k=0;k<27;k++)
						if(grid[j][s]!=0&&grid[s][k]!=0&&grid[j][k]!=1)
							grid[j][k]=2;
				for(j=0;j<27;j++)
					for(k=0;k<27;k++)
						if(grid[j][t]!=0&&grid[t][k]!=0&&grid[j][k]!=1)
							grid[j][k]=2;
				
			}
		}
		int flag=0;
		cout << "Case " << p+1<<":\n";
		for(j=0;j<27;j++)
			for(k=0;k<27;k++)
				if(grid[j][k]==2)
				{
					cout << (char)('A'+j) << "<" << (char)('A'+k) << endl;
					flag=1;

				}
		if(flag==0) cout <<"NONE" << endl;
	}
}


			
				



