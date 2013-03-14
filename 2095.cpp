#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int m,n;

	int i,j,k;
	int s,t;
	int A[500001]={0,0};
	for(i=1;i<=250000;i++)
		for(j=2;i*j<=500000;j++)
			A[i*j]+=i;

  // for(i=0;i<100;i++) cout << A[i] << endl;
//	cin >> t;
		scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",A[n]);
	//	cin >> n;
	//	cout << A[n] << endl;
	}
}



