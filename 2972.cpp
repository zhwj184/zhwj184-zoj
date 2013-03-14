#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;
int main()
{
	int n,m;
	int force[128][128];
	int i,j,k;
	int T;
	int t1,t2,t3,f1,f2;
	cin >> T;
	while(T--)
	{
		cin >> n >> m;
		for(i = 0; i <= n; i++)
			for(j = 0; j <=m; j++)
				force[i][j] = 123456;
		//memset(force,123456,sizeof(force));
		//for(i = 0; i <= m; i++)
		///	force[0][i] = 0;
		force[0][m] = 0;
		for(i = 0; i < n;i++)
		{
			cin >> t1 >> t2 >> t3 >> f1 >> f2;
			for(j = 0; j <= m; j++)
			{
				if(j >= f1 && force[i][j] + t1 < force[i+1][j-f1])
					force[i+1][j-f1] = force[i][j] + t1;
				if(force[i][j] + t2 < force[i+1][j])
					force[i+1][j] = force[i][j] + t2;
				if(j + f2 >= m && force[i][j] + t3 < force[i+1][m])
					force[i+1][m] = force[i][j] + t3;
				if(j + f2 < m && force[i][j] + t3 < force[i+1][j+f2])
					force[i+1][j+f2] = force[i][j] + t3;

			}
			
			
		}
		int ans = 63243;
		for(i = 0; i <= m; i++)
			if(force[n][i] < ans)
				ans = force[n][i];
		cout << ans << endl;
	}
}