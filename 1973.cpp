#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double A[1000],B[1001];
	double C[10001],D[10001];
	int i,j,k,m,n;
	while( cin >> n)
	{
		for(i=0;i<n;i++)
			cin >> A[i] >> B[i];
		for(i=0;i<n-1;i++)
		{
			C[i]=(A[i]+A[i+1])/2;
			D[i]=(B[i]+B[i+1])/2;
		}
		C[n-1]=(A[n-1]+A[0])/2;
		D[n-1]=(B[n-1]+B[0])/2;
		printf("%d ",n);
		for(i=0;i<n-1;i++)
			printf("%.6lf %.6lf ",C[i],D[i]);
		printf("%.6lf %.6lf\n",C[n-1],D[n-1]);
	}
}