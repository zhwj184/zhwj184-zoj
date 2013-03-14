#include <iostream>
using namespace std;
int main()
{
	int t;
	int n;
	int A[31];
	cin >> t;
	int i;
	while(t--)
	{
		cin >> n;
		for( i=0;i<n;i++)
			cin >> A[i];
		if(n%2==1)
		{
			cout << "YES" << endl;
			continue;
		}
		int old=0,even=0;
		for( i=0;i<n;i++)
			if(A[i]==1)
			{
				if(i%2==0) even++;
				else old++;
			}
			if((old-even)>-2&&(old-even)<2) cout << "YES" << endl;
			else cout << "NO\n";
	}
}