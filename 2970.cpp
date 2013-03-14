#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;


int main()
{	
	int T;
	int n;
	char str[10];
	int a;
	int i,j,k;
	cin >> T;
	while(T--)
	{
		cin >> str;
		if((strcmp(str,"Faster"))==0)
		{
			cin >> n;
			k = 1000000000;
			for(i = 0; i < n; i++)
			{
				cin >> a;
				if(a < k)
					k = a;
			}
		}
		else if(strcmp(str,"Higher")==0 || strcmp(str,"Stronger") == 0)
		{
			cin >> n;
			k = 0;
			//cout << k << endl;
			for(i = 0; i< n; i++)
			{
				cin >> a;
				if( a >= k)
					k = a;
			}
			//cout << k << endl;
		}
		cout << k << endl;
	}

}