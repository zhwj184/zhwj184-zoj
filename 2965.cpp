#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;


int main()
{
	int ans[101];
	int T;
	int i,j,k;
	int cnt,n;
	cnt = 0;
	n = 6;
	while(cnt < 100)
	{
		k = 0;
		int flag = 1;
		while(n++)
		{
			if(n % 7 == 0 || ( n % 10 == 7 || (n/10) % 10 == 7 || (n/100) % 10 == 7))
			{
				if( flag == 1)
					j = n;
				k++;
				flag = 0;
				if( k > cnt)
				{
					ans[cnt] = j;
					cnt++;
				}
			}
			else
			{
				flag = 1;
				k = 0;
			}
			if(cnt>100)
				break;
		}
	}
	cin >> T;
	//ans[1] = 7;
	while(T--)
	{
		cin >> n;
		cout << ans[n-1] << endl;
	}
}
	