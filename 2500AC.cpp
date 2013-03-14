#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int grid[100][100];
int i,j,k,m,n;
char test[4];
char c1,c2;

int main()
{
	int cas;
	int s,t;

    cin>>cas;
	while(cas--)
	{
		cin >> n >> m;
		memset(grid,0,sizeof(grid));
		for(i=0;i<m;i++)
		{
			cin >> t >> s;

				grid[s][t]=1;
				for(j=0;j<n+1;j++)
					for(k=0;k<n+1;k++)
						if(grid[j][s]==1&&grid[s][k]==1)
							grid[j][k]=1;
				for(j=0;j<n+1;j++)
					for(k=0;k<n+1;k++)
						if(grid[j][t]==1&&grid[t][k]==1)
							grid[j][k]=1;
		}
		int flag=0;
		int min=0,max=0;
		/*for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				cout << grid[j][k] << " ";
			}
			cout << endl;
		}*/
//		cout << "Case " << p+1<<":\n";
		for(j=1;j<n+1;j++)
		{
			min=0;
			max=0;
			for(k=1;k<n+1;k++)
			{
				if(grid[j][k]==1) min++;
				else if(grid[k][j]==1) max++;
			}
		   if(min>n/2||max>n/2)
			   flag++;
		}
		cout << flag << endl;

	}
}


			
				



