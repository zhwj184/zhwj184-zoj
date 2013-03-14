#include <iostream>
using namespace std;
int main()
{
	long sum;
	long A[7001*7];
	int i,j,k;
	int B[7001*16];
	int C[17];
	int n;
	int s,t;
	while(cin >> n)
	{
		if(n==-1) break;
		for(i=0;i<n;i++)
			cin >> A[i];
		sum=0;
		s=0;
		for(i=0;i<n;i++)
		{
			t=0;
			for(t=15;t>=0;t--)
			{
				B[s+t]=A[i]%2;
				A[i]/=2;
			}
			s+=16;
		}
		//for(i=0;i<n*7;i++)
		//  cout << B[i] << " ";
		// cout << endl;
		for(i=0;i<n*16;i+=7)
		{
			s=0;
			for(t=i+1;t<i+7;t++)
				s=s*2+B[t];
			//cout << s << endl;
			if(B[i]==1) s=s*(-1);
			sum+=s;
		}
		cout << sum << endl;
	}
}

	
		





					