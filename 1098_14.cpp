#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	
	while( cin >> s )
	{
		int mem[32] = {0}, m[] = {128, 64, 32, 16, 8, 4, 2, 1};
		int i,j;
		bool over;
		int accu = 0;
		int pc = 0;
		for( i = 0; i < 8; i++)
			mem[0] = mem[0] + (s[i] - '0') * m[i];
		for( i = 1; i < 32; i++)
		{
			cin >> s;
			for( j = 0; j < 8; j++)
				mem[i] = mem[i] + (s[j]-'0') * m[j];
		}
		over = false;
		while ( over == false)
		{
			pc = pc % 32;
			int x = mem[pc] & 31;
			switch( mem[pc] & 224)
			{
				case 0:
					mem[x] = accu;
					pc++;
					break;
				case 32:
					accu = mem[x];
					pc++;
					break;
				case 64:
					if( accu == 0)
						pc = x;
					else 
						pc++;
					break;
				case 96:
					pc++;
					break;
				case 128:
					accu--;
					if( accu < 0)
						accu = 255;
					pc++;
					break;
				case 160:
					accu = (++accu) % 256;
					pc++;
					break;
				case 192:
					pc = x;
					break;
				case 224:
					over = true;
					break;
			}
		}
		//cout << accu << endl;
		for( i = 7; i >= 0; i--)
			cout << ((accu >> i) & 1);
		cout << endl;
	}
}

