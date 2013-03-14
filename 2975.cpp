#include <iostream>
#include<string>
#include <complex>
#include <cassert>
#include <utility>
#include<cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int T;
	int n,m;
	char fuwa[251][251];
	int A[5];
	cin >> T;
	while(T--)
	{
		cin >> n >> m;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m ;j++)
				cin >> fuwa[i][j];
		int cnt = 0;
		for(int i = 0; i < n-1; i++)
			for(int j = i+1; j < n; j++)
			{
				memset(A,0,sizeof(A));
				for(int k = 0; k < m ;k++)
				{
					if(fuwa[i][k] == fuwa[j][k])
					{
						if(fuwa[i][k] == 'B')
							A[0]++;
						else if(fuwa[i][k] == 'J')
							A[1]++;
						else if(fuwa[i][k] == 'H')
							A[2]++;
						else if(fuwa[i][k] == 'Y')
							A[3]++;
						else if(fuwa[i][k] == 'N')
							A[4]++;
					}
				}
				for(int k = 0; k < 5; k++)
					if(A[k] >=2)
						cnt+=(A[k]*(A[k]-1))/2;
			}
		cout << cnt << endl;
	}
}