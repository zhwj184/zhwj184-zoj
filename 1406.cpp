//����ͼ��С������,prim�㷨,�ڽ�����ʽ,���Ӷ�O(n^2)
//������С�������ĳ���,����ͼ�Ĵ�Сn���ڽ���mat,�����ڵ��Ȩinf
//�ɸ��ı�Ȩ������,pre[]�������Ĺ���,�ø�����ʾ,���ڵ�(��һ��)preֵΪ-1
//���뱣֤ͼ����ͨ��!
#include <iostream>
using namespace std;
#define MAXN 200
#define inf 1000000000
typedef double elem_t;

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
	double ele[200][200];
	int i,j,k;
	char c,ch;
	int cost;
	int father[100];
	int n;
	while( cin >> n)
	{
		if(n==0) break;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				ele[i][j]=100000000;
		for(i=0;i<n-1;i++)
		{
			cin >> c;
			cin >> k;
			for(j=0;j<k;j++)
			{
				cin >> ch >> cost;
				ele[c-'A'][ch-'A']=cost;
				ele[ch-'A'][c-'A']=cost;
			}
		}
		cout << prim(n,ele,father) << endl;
	}

}