#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;


int main()
{	
	
	int a[101],b[101];
	int cnt;
	int T;
	cin >> T;
	int n;
	for(int i = 0 ; i < T; i++)
	{
		cin >> n;
		if(n == 0)
		{
			cin >> n;
			cout << "0" << endl;
		}
		else 
		{
			for(int j = n; j >= 0; j--)
				cin >> a[j];
			for(int j = 0; j < n; j++)
				b[j] = a[j+1] * (j+1);
			for(int j = n-1; j > 0 ; j--)
				cout << b[j] << " ";
			cout << b[0] << endl;
		}
	}
}
