#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int a[1300];
bool bvisit[50][50];
int n;
int len;
bool bfound = false;

void dfs(int k)
{

	if(0 == k)
	{
		for(int i = 0; i < n; ++i)
		{
			a[k] = i;
			dfs(k + 1);
			if(bfound)
				return ;
		}
	}
	else if( k < len - 1)
	{
		for(int i = 0; i < n; ++i)
		{
			if(bvisit[a[k - 1]][i] == false)
			{			
				a[k] = i;
				bvisit[a[k-1]][i] = true;
				bvisit[i][a[k-1]] = true;

				dfs(k + 1);
				
				if(bfound)
					return ;
				
				bvisit[a[k-1]][i] = false;
				bvisit[i][a[k-1]] = false;

			}

		}
	}
	else
	{
		for(int i = 0; i < n; ++i)
		{
			if(bvisit[a[k - 1]][i] == false && bvisit[i][a[0]] == false)
			{
				cout << len << endl;
				for(int j = 0; j < len - 1; j++)
					cout << a[j] << " ";
				cout << i << endl;
				bfound = true;
				return ;
			}
		}
	}

}

int main()
{
	while(cin >> n)
	{
		len = (n * (n - 1) / 2);
		
		memset(a, -1, sizeof(a));
		memset(bvisit, false, sizeof(bvisit));
		
		bfound = false;

		for(int i = 0; i < n; ++i)
			bvisit[i][i] = true;

		dfs(0);
	
	}
	return 0;
}