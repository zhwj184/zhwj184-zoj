#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int P[101][101];
int flag[101];

int mi,k;
int ma,kk;

int main()
{
	int cas;
	int n,p;
	cin >> cas;
	while (cas --)
	{
		cin >> n >> p;
		memset(flag,0,sizeof(flag));
		mi=0;
		k=0;
		for(int i=0;i<n;i++)
		{
			mi=10000;
			k=0;
			ma=0;
			kk=0;
			for(int j=0;j<p;j++)
			{
				scanf("%d", &P[i][j]);
				if(P[i][j]>ma){
					ma=P[i][j];
				}
				if(P[i][j]<mi)
					mi=P[i][j];
			}
			for(int j=0;j<p;j++)
			{
				if(P[i][j]==mi)
				{
					if(flag[j]>=0)
						flag[j]++;
				}
				if(P[i][j]==ma)
					flag[j]=-1;
			}
			//cout << "min: " << mi << " max: " << ma << endl;
		}
		int num=0;
		int s=0;
		if(n%2==1) n-=1;
		for(int i=0;i<p;i++)
			if(flag[i]>n/2)
			{
				num++;
				s=i;
			//	cout << i+1 << " ";
			}
			//cout << endl;
		if(num==0) cout << num << endl;
		else {
			for(int i=0;i<s;i++)
				
				if(flag[i]>n/2)
					cout << i+1 << " ";
			cout << s+1 << endl;
		}
		if(cas >0) cout << endl;

	}
}