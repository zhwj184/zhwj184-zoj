#include <iostream>
#include <cmath>
#include <cstdlib>
#include <set>
#include <vector>
using namespace std;

long long m[21][201];

void init()
{
	for(int i  = 0; i < 201; ++i)
		m[1][i] = 0;
	m[1][0] = 1;
	for(int i = 2; i < 21; ++i)
	{
		for(int j = 0; j < 201; ++j)
		{
			m[i][j] = 0;
			for(int k = 0; k < i && j - k >= 0; ++k)
			{
				m[i][j] += m[i - 1][j - k];
			}

		}
	}
}
int main()
{
	int n;
	int k ;
	init();
	while(cin >> n >> k)
	{
		if( 0 == n && 0 == k)
			return 0;
		cout << m[n][k] << endl;
	}
}