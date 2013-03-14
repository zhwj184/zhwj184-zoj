#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
	string str;
	int t;
	int n;
	int a[100];
	bool flag[100];

	cin >> t;

	while(t--)
	{
		cin >> n;
		
		str = "";

		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];

			for(int j = 0; (i > 0 && j < a[i] - a[i-1]) || ( i == 0 && j < a[i]); ++j)
			{
				str += '(';
			}

			str += ')';

		}

		memset(flag , false, sizeof(flag));

		for(int i = 0; i < str.size(); ++i)
		{
			int cnt = 0;

			if(str[i] == ')')
			{
				for(int j = i - 1; j >= 0; --j)
				{
					if(str[j] == '(')
					{	
						++cnt;
						if(flag[j] == false)
						{
							cout << cnt;
							if(i == str.size() - 1)
								cout << endl;
							else
								cout << " ";
							flag[j] = true;
							break;
						}
					}
					
				}
			}
		}


	}

	return 0;
}