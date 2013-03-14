#include <string>
#include <iostream>
using namespace std;

int record[15][1121];
int prime[1121];
int search[1121],m;

int main()
{
	int i,j,k;
	m=0;
	memset(record,0,sizeof(record));
	for(i=2;i<1121;i++){
		for(j=0;j<m;j++)
			if(i%prime[j]==0)
				break;
		if(j==m) 
			prime[m++]=i;
	}

    record[0][0]=1;
	for(k=0;k<m;k++)
		for(j=1120-prime[k];j>=0;j--){
			for(i=14;i>0;i--){
				if(record[i-1][j])
					record[i][j+prime[k]]+=record[i-1][j];
			}
		}

	int a,b;
	while( cin >> a >> b){
		if(!(a|b)) break;
		cout << record[b][a] << endl;
	}

}