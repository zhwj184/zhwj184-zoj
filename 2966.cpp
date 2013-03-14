#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;

#define MAXN 501
#define inf 30000
typedef int elem_t;

elem_t prim(int n,elem_t mat[][MAXN],int* pre){
	elem_t min[MAXN],ret=0;
	int v[MAXN],i,j,k;
	for (i=0;i<n;i++)
		min[i]=inf,v[i]=0,pre[i]=-1;
	for (min[j=0]=0;j<n;j++){
		for (k=-1,i=0;i<n;i++)
			if (!v[i]&&(k==-1||min[i]<min[k]))
				k=i;
		for (v[k]=1,ret+=min[k],i=0;i<n;i++)
			if (!v[i]&&mat[k][i]<min[i])
				min[i]=mat[pre[i]=k][i];
	}
	return ret;
}

int main()
{
	int mat[501][501];
	int p[501];
	int t,n,i,j,k;
	int T;
	int num,edge;
	cin >> T;
	while(T--)
	{
		cin >> num >> edge;
		memset(mat,inf,sizeof(mat));
		for(i = 0; i < edge; i++)
		{
			cin >> j >> k >> t;
			mat[j][k] = mat[k][j] = t;
		}
		cout << prim(num,mat,p)<< endl;

	}
}