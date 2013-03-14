#include <iostream>
#include <cstdio>
using namespace std;
const int MAXN = 101;
const int MAX = 99999999;
const int point[5][5] = {	{5, -1, -2, -1, -3}, {-1, 5, -3, -2, -4}, {-2, -3, 5, -2, -2},
							{-1, -2, -2, 5, -1}, {-3, -4, -2, -1, 0}};
int f[MAXN][MAXN], data[2][MAXN], num[2];
int main()
{
	char ch[1000];
	int i,j,k,m,n;
	int cas;
	cin >> cas;
	while(cas--)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&num[j]);
			cin >> ch;
			m=strlen(ch);
			for(i=0;i<m;i++)
			{
				switch(ch[i]){
					case 'A':data[j][i]=0;break;
					case 'C':data[j][i]=1;break;
					case 'G':data[j][i]=2;break;
					case 'T':data[j][i]=3;break;
				}
			}
		}
		for(i=0;i<MAXN;i++)
			for(j=0;j<MAXN;j++)
				f[i][j]=-MAX;
		f[0][0]=0;
		for(i=0;i<num[0];i++)
			for(j=0;j<num[1];j++)
			{
				if(f[i+1][j+1]<f[i][j]+point[data[0][i]][data[1][j]])
					f[i+1][j+1]=f[i][j]+point[data[0][i]][data[1][j]];
				if(f[i+1][j]<f[i][j]+point[data[0][i]][4])
					f[i+1][j]=f[i][j]+point[data[0][i]][4];
				if(f[i][j+1]<f[i][j]+point[4][data[1][j]])
					f[i][j+1]=f[i][j]+point[4][data[1][j]];
			}
		cout << f[num[0]][num[1]] << endl;
	}
}


