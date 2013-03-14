#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

char grid[27][27];
int n;
int ans;
int row,col;

bool cango(int i,int j)
{
	if( i >= 0 && j >= 0 && i < row && j < col && grid[i][j] == 'X')
		return true;
	return false;
}

void search(int x, int y)
{
	grid[x][y] = '-';
	if( x-1 < 0  || grid[x-1][y] == '.')
		ans++;
	if( x+1 >= row || grid[x+1][y] == '.')
		ans++;
	if( y-1 < 0  || grid[x][y-1] == '.')
		ans++;
	if( y+1 >= col || grid[x][y+1] == '.')
		ans++;
	if( cango(x-1,y))
		search(x-1,y);
	if( cango(x+1,y))
		search(x+1,y);
	if( cango(x,y-1))
		search(x,y-1);
	if( cango(x,y+1))
		search(x,y+1);
	if( cango(x-1,y-1))
		search(x-1,y-1);
	if( cango(x-1,y+1))
		search(x-1,y+1);
	if( cango(x+1,y-1))
		search(x+1,y-1);
	if( cango(x+1,y+1))
		search(x+1,y+1);

}

int main()
{
	
	int sx,sy;
	while( cin >> row >> col >> sx >> sy)
	{
		if( !(row || col || sx || sy))
			break;
		int i,j;
		
		ans = 0;
		for( i = 0; i < row; i++)
			for( j = 0; j < col; j++)
				cin >> grid[i][j];
		search(sx-1,sy-1);
		//for( i = 0; i < row ; i++)
		//	cout << grid[i] << endl;
		cout << ans << endl;
	}
}