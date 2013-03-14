#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
	char str[1003];
	int len;
	int flag;
	int i,j,k;
	int t = 0;
	while(cin >> str)
	{
		len = strlen(str);
		flag = 1;
		t = 0;
		for(i = 0; i < len ; i++)
		{
			if(flag == 0)
				break;
			flag = 0;
			for(j = 0; j <= len / 2; j++)
			{
				if(str[ (i + j) % len] != str[ (i-j+len)%len])
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)
				t = 1;
			flag = 0;
			for(j = 0; j < len / 2 && t == 0; j++)
			{
				if(str[ (i + j + 1) % len] != str[ (i-j+len)%len])
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0 && t == 0)
				t = 2;
			
		}
		if(flag == 0)
		{
			cout << "Symmetric" << endl;
			if( t == 2 )
				cout << i << "-" << i+1 << endl;
			else 
				cout << i << endl;
		}
		else 
			cout << "Not symmetric" << endl;
	}
}
