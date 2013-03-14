#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

#define maxn 1001

int dig[]={63,6,91,79,102,109,125,7,127,111}; //用7位二进制表示一个数码，编号后对应位为1则表示该段亮。
int r[10][10];

int num[maxn];
vector < int > g[maxn];
int sx[maxn],sy[maxn],vy[maxn];
int n;

void make()
{
	memset(r,0,sizeof(r));
	for(int i = 0; i <10; i++)
		for(int j = 0; j < 10; j++)
			if(j!=i)
			{
				if((dig[i] | dig[j]) == dig[i])
					r[i][j] = 1;
			}
}

int path(int p)
{
	int q;
	for(int i = 0; i < g[p].size(); i++)
	{
		q = g[p][i];
		if(!vy[q])
		{
			vy[q] = 1;
			if(sy[q] == -1 || path(sy[q]))
			{
				sy[q] = p;
				sx[p] = q;
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	make();
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d",&num[i]);
			g[i].clear();
		}
		for(int i = 0; i < n; i++)
			for(int j = i+1; j < n;j++)
				if(r[num[i]][num[j]])
					g[i].push_back(j);
		memset(sx,-1,sizeof(sx));
		memset(sy,-1,sizeof(sy));
		int ans = n;
		for(int i = 0; i < n; i++)
		{
			if(sx[i] == -1)
			{
				memset(vy,0,sizeof(vy));
				if(path(i))
					ans--;
			}
		}
		cout << ans << endl;

	}
}
