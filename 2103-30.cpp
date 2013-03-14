#include <iostream>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int mini;
int N,C,H;
int road[21][21];
int used[21][21];
int total;
bool suc = false;

void  dp(int u,int type,int num,int colors)
{
	if(num == H)
	{
		if(colors < mini)
			mini = colors;
		return ;
	}
	if(colors >= mini)
		return ;
	for(int i = 0; i < N; i++)
	{
		if(road[u][i] > -1 && !used[u][i])
		{
			used[u][i] = 1;
			used[i][u] = 1;
			if(type == road[u][i])
				dp(i,type,num+1,colors);
			else 
				dp(i,road[u][i],num+1,colors+1);
			used[u][i] = 0;
			used[i][u] = 0;
		}
	}
	return;
}

int main()
{
	int a,b,c;
	while(cin >> N >> C >> H)
	{
		if(N == 0 && C == 0 && H == 0)
			break;
		memset(road,-1,sizeof(road));
		for(int i = 0; i < H; i++)
		{
			cin >> a >> b >> c;
			road[a][b] = c;	
			road[b][a] = c;
		}
		suc = false;
		mini = 10000;
		int now = 10000;
		memset(used,0,sizeof(used));
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				if(road[i][j] >= 0)
				{
					//suc = false;
					//memset(used,0,sizeof(used));
					used[i][j] = 1;
					used[j][i] = 1;
					dp(j,road[i][j],1,0);
					//if( suc==true &&mini < now)
					//	now = mini;
					used[i][j] = 0;
					used[j][i] = 0;
				}
			}
		}
		if(mini < 10000) 	cout << mini << endl;
		else cout << "No" << endl;
	}
}

