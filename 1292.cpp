#include <iostream>
#include <cstdio>
using namespace std;

int res[105];
char input[101];
void add(int *s,char *t)
{
	int len=strlen(t);
	int i,j,k;
	for( i = len - 1,k = 104; i >= 0 ; i--,k--)
	{
		s[k]=s[k]+(t[i]-'0');
		if(s[k]> 9)
		{
			s[k]=s[k]-10;
			s[k-1]=s[k-1]+1;
		}
	}
}
void print()
{
	int i;
	i = 0;
	while( res[i++] == 0);
	for( int j = i-1;j < 105; j++)
		cout << res[j];
	cout << endl;

}

int main()
{
	int T;
	int i,j,k;
	cin >> T;
	for( i = 0; i < T; i++)
	{
		memset(res,0,sizeof(res));
		while( cin >> input && strcmp(input,"0"))
			add(res,input);
		print();
		if( i < T-1 )
			cout << endl;
	}
}