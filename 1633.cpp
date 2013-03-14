#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

char A[] = "^__^";
char B[] = "T.T";

unsigned long long f[102];

char ff(int k,unsigned long long m)
{
	if(k==0)
		return A[m-1];
	if(k==1) 
		return B[m-1];
	if(f[k-1]>=m)
		return ff(k-1,m);
	//if(f[k-2]>n)
	else 	return ff(k-2,m-f[k-1]);
}

int main()
{
	unsigned long long n;
	f[0]=4;
	f[1]=3;
	int i;
	for( i=2;i<=100;i++)
		f[i]=f[i-1]+f[i-2];
	while( cin >> n)
	{
		for(i=1;i<=100;i++)
			if(f[i]>=n)
				break;
		cout << ff(i,n) << endl;

	}
}