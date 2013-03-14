#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int m,n;
	int A[500001];
	int i,j,k;
	int s,t;
	memset(A,0,sizeof(A));
	for(i=1;i<=250000;i++)
		for(j=2;i*j<=500000;j++)
			A[i*j]+=i;
   for(i=0;i<100;i++) cout << A[i] << endl;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cout << A[n] << endl;
	}
}



