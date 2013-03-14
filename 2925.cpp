#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
using namespace std;

char grid[502][502];
int m,n;

int main()
{
	int i,j,k;
	int x,y;
	char c;
	int max;
	int cas=0;
	while( (scanf("%d",&n))!=EOF ){
		scanf("%d\n",&m);
		//cin >> m;
		//getchar();
		memset(grid,'.',sizeof(grid));
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
				//cin >> grid[i][j];
				scanf("%c",&grid[i][j]);
			getchar();
		}
				//cin >> grid[i][j];

		//cin >> x >> y >> c;

		scanf("%d %d %c",&x,&y,&c);
		grid[x][y]=c;
		max=n>m?n:m;
		//cout << x << y << c << endl;
		//getchar();

		if(cas>0) cout << endl;

		for(k=0;k<n+m;k++)
		{
			for(i=1;i<=n;i++)
				for(j=1;j<=m;j++)
				{
					if(grid[i][j]!='X') continue;

					if(grid[i-1][j-1]=='S'||grid[i-1][j-1]=='E'||grid[i-1][j-1]=='Q') 
						grid[i][j]='Q';

					else if(grid[i][j-1]=='Y' || grid[i][j-1]=='Q' || grid[i][j-1]=='E')
						grid[i][j]='E';

					else if(grid[i+1][j-1]=='Y' || grid[i+1][j-1]=='N' || grid[i+1][j-1]=='E')
						grid[i][j]='Y';

					else if(grid[i+1][j]=='Y' || grid[i+1][j]=='N' || grid[i+1][j]=='V')
						grid[i][j]='N';

					
					else if(grid[i+1][j+1]=='W' || grid[i+1][j+1]=='V' || grid[i+1][j+1]=='N')
						grid[i][j]='V';
					
					else if(grid[i][j+1]=='W' || grid[i][j+1]=='V' || grid[i][j+1]=='J')
						grid[i][j]='W';

						
					else if(grid[i-1][j+1]=='W' || grid[i-1][j+1]=='S' || grid[i-1][j+1]=='J')
						grid[i][j]='J';

					else if(grid[i-1][j]=='J' || grid[i-1][j]=='S' || grid[i-1][j]=='Q')
						grid[i][j]='S';
				}
		}

		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++)
				printf("%c",grid[i][j]);
			printf("\n");
				//cout << grid[i][j];
			//cout << endl;
		}
		cas++;
	}
}








