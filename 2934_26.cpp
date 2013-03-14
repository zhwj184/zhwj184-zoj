#include <iostream>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	long A,B,C,S;
	int flag[65537];
	char res[17];
	long i,j,k,m,n;
	while((scanf("%d",&A))!=EOF)
	{
		if(A == 0)
			break;
		scanf("%d%d%d",&B,&C,&S);
		memset(flag,0,sizeof(flag));
		n = S;
		for(i = 0; i < 16; i++)
		{
			res[i] = '0' + (n % 2);
			n /= 2;
		}
		
		m = S;
		while(flag[m] == 0)
		{
			flag[m] = 1;
			m = (A * m + B ) % C;
			n = m;
			for(j = 0; j < 16; j++)
			{
				char ch = '0' + (n % 2);
				if( res[j] != '?' && res[j] != ch)
					res[j] = '?';
				n /= 2; 
			}
		}
		for(j = 15; j >= 0; j--)
			printf("%c",res[j]);
		printf("\n");
	}
}
