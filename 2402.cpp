#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	double f[11][2001];
	double r[11][2001];
	int i,j;
	int n,m;
	int T;
	memset(f,0,sizeof(f));
	memset(r,0,sizeof(r));
	for(i = 1; i < 2001; i++)
	{
		f[1][i]  = 1;
	}
	double s = 0;
	for(j = 1; j < 2001; j++)
	{
		s += f[1][j];
		r[1][j] = s;
	}
	for(i = 2; i <= 10; i++)
	{
		double a = r[i][1];
		for(int k = 2; k < 2001; k++)
		{
			f[i][k] = r[i-1][k/2];
			a += f[i][k];
			r[i][k] = a;
				//for(int s = 1; s <= k / 2; s++)
			//	f[i][k] += f[i-1][s];
		}
	}
	//for(i = 1; i < 5; i++)
	//	for(j = i*2;  j < i*4; j++)
	//		cout << f[i][j] << " ";
	cin >> T;
	for(i = 1; i <= T; i++)
	{
		cin >> n >> m;
		printf("Case %d: n = %d, m = %d, # lists = %0.0f\n", i, n, m, r[n][m]);
	//	cout << r[n][m] << endl;
	}
}
