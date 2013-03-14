#include <iostream>
#include <cstdio>
using namespace std;

#define MAX 25
#define MAXROW  30
int main()
{
	int N;
	int i,j;
	int total,row;
	int min ;
	int T;
	char str[26];
	while( cin >> T && T)
	{
		total = 0;
		min = 30;
		getchar();
		for( int i = 0; i < T; i++)
		{
			char ch;
			row = 0;
			gets(str);
			for( int j = 0; j < MAX; j++)
			{
				ch = (char)str[j];
				if( ch == ' ')
					row++;
			}
			total = total + row;
			if( min > row)
				min = row;
			//cout << "row : " << row << endl;
			//getchar();
		}
		
		cout << total - T * min << endl;
	}
}

