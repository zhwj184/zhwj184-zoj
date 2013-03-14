#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	long long f[61][3];
	long res;
	long i,j,k,m,n;
	f[1][0] = f[1][1] = f[1][2] = 1;
	for(i = 2; i < 61; i++)
	{
		f[i][2] = f[i-1][0] +f[i-1][1] + f[i-1][2];
		f[i][1] = f[i-1][1] + f[i-1][2];
		f[i][0] = f[i-1][2];
	}
	while(cin >> n)
	{
		if(n == 0)
			cout << "1" << endl;
		else cout << f[n][0] + f[n][1] + f[n][2] << endl;
	}
}
