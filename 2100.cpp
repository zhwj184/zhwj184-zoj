#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cctype>
using namespace std;

char  seed[7][7];
int sum;
int row,col;
int flag[7][7];

bool dfs(int i,int j,int step)
{
	if(i<0 || i>= row || j < 0 || j>= col || seed[i][j]=='S' || flag[i][j] )
		return false;
	step++;
	flag[i][j]=1;
	if(step==sum)
		return true;
	if(dfs(i-1,j,step))
		return true;
	if(dfs(i+1,j,step))
		return true;
	if(dfs(i,j-1,step))
		return true;
	if(dfs(i,j+1,step))
		return true;
	flag[i][j]=0;
	return false;
}

int main()
{
	string str;

	int i,j,k;
	int ans=0;
	int step;
	while(cin >> row >> col )
	{
		ans = 0;
		if(row==0&& col == 0)
			break;
		sum=0;
		for(i=0;i<row;i++)
			for(j=0;j<col;j++)
			{
				cin >> seed[i][j];
				if(seed[i][j]=='.')
					sum++;
			}
		memset(flag,0,sizeof(flag));
		step=0;
		if(dfs(0,0,step))
			ans=1;
			if( ans==0 )
				cout << "NO" << endl;
			else cout << "YES" << endl;

	}
}