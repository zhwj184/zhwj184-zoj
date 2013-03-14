
#include<iostream>
#include<cctype>
#include<cstring>
//#include <cstdlib>
#include <cmath>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))

char name[33][50];
int n,m;
char s[50],t[50];
double change[31][31];

int main()
{
	int i,j,k;
	int cas=0;
	double p;
	while (cin >> n && n){

		for(i=0;i<n;i++)
			cin >> name[i];

		memset(change,0,sizeof(change));

		for(i=0;i<n;i++)
			change[i][i]=1.0;

		cin >> m;
		for(i=0;i<m;i++){
			cin >> s >> p >> t;
			
			for(j=0;j<n;j++)
				if(strcmp(s,name[j])==0)
					break;
			
			for(k=0;k<n;k++)
				if(strcmp(t,name[k])==0)
					break;

			change[j][k]=p;
		}

		for(k=0;k<n;k++)
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					if(change[i][j]<change[i][k]*change[k][j])
						change[i][j]=change[i][k]*change[k][j];

		int flag=0;
		cout << "Case " << cas+1 << ":";
		for(i=0;i<n;i++){
			if(change[i][i]>1.0){
				flag=1;
				cout << " Yes" << endl;
				break;
			}
		}
		if(!flag) cout << " No" << endl;
		cas++;
	}
}




