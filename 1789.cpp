#include <string>
#include <iostream>
#include <cctype>
#include <cstring>
#include <list>
#include <cmath>
using namespace std;

int sus[30001];
int f[501];
int m,n;
int man[501][30001];

int sum;
int main()
{
	int i,j,k;
	int num[501];

	while( cin >> n >> m )
	{
		if(n==0 && m==0)
			break;
		memset(man,0,sizeof(man));
		memset(sus,0,sizeof(sus));
		memset(f,0,sizeof(f));

		sus[0]=1;
		sum=1;

		for(i=0;i<m;i++){
			cin >> num[i];
			for(j=0;j<num[i];j++)
				cin >> man[i][j];
		}

		bool flag=true;

		for(int p=0;p<m;p++){
			
			for(i=0;i<m;i++){
				//if(f[i]) continue;
				for(j=0;j<num[i];j++)
					if(sus[man[i][j]]==1)
					{
						//cout << "i=" << i+1 << endl;
						//cout << man[i][j] << endl;
						//break;	
					
						for(k=0;k<num[i];k++)
							sus[man[i][k]]=1;
						//f[i]=1;
						break;
			
					}		

			}
			//if(i==m)
			//	break;
				//flag=false;
		}
		sum=0;
		for(i=0;i<n;i++)
			if(sus[i]==1)
				sum++;
		cout << sum << endl;
	}
}
			
