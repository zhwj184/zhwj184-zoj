#include <iostream>
using namespace std;

#define MaxN 50 

int n, ma; 
int path[MaxN][MaxN]; 
int inClique[MaxN]; 

void dfs(int inGraph[]) 
{ 
	int i, j; 
	int Graph[MaxN]; 

	if ( inClique[0]+inGraph[0]<=ma ) return; 
	if ( inClique[0]>ma ) ma=inClique[0]; 

	/*����ͼ�е����е�*/ 
	for (i=1; i<=inGraph[0]; i++) 
	{ 
		/*�ѽڵ���õ�����*/ 
		++inClique[0]; 
		inClique[inClique[0]]=inGraph[i]; 
		/*����һ���µ���ͼ*/ 
		Graph[0]=0; 
		for (j=i+1; j<=inGraph[0]; j++) 
			if (path[inGraph[i]][inGraph[j]] ) 
				Graph[++Graph[0]]=inGraph[j]; 
		dfs(Graph); 
		/*������ɾ���ڵ�*/ 
		--inClique[0];} 
} 
int main() 
{ 
	int inGraph[MaxN]; 
	int i, j; 
	cin >>n; 
	while (n > 0) 
	{ 
		for (i=0; i<n; i++) 
			for (j=0; j<n; j++) 
				cin >>path[i][j]; 
		ma = 1; 
		/*��ʼ��*/ 
		inClique[0]= 0; 
		inGraph[0] = n; 
		for (i=0; i<n; i++) inGraph[i+1]=i; 
		dfs(inGraph); 
		cout<<ma<<endl; 
		cin >>n; 
	} 
	return 0;}