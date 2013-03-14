#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;
int n;
int a[101][101],b[101][101];
int i,j,k;
int minx,miny,maxx,maxy;
void init()
{
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
}
void input()
{
	minx = miny = 100;
	maxx = maxy = 0;
	int x,y;
	for(i = 0; i < n; i++)
	{
		cin >> x >> y;
		a[x][y]++;
		if(x < minx)
			minx = x;
		if(x > maxx)
			maxx = x;
		if(y < miny)
			miny = y;
		if(y > maxy)
			maxy = y;
	}
}
void output()
{
	b[0][0] = a[0][0];
	for(i = minx; i <= maxx; i++)
		for(j = miny; j <= maxy; j++)
		{
			b[i][j] = (b[i-1][j] > b[i][j-1] ? b[i-1][j] : b[i][j-1]);
			if(a[i][j])
				b[i][j] += a[i][j];
		}
	cout << b[maxx][maxy] << endl;
}
int main()
{
	while(cin >> n && n)
	{
		init();
		input();
		output();
	}
	cout << "*" << endl;
}
