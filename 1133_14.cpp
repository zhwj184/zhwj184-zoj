#include <iostream>
#include <cmath>
using namespace std;

int check(const int &n)
{
	int bound = (int)sqrt((double) n)+2;
	int i,j;
	int sum = 0;
	int t = n;
	for( i = 2; i < bound; i++)
	{
		if( t < i ) break;
		while ( t % i == 0)
		{
			j = i;
			while( j )
			{
				sum += j%10;
				j/=10;
			}
			
			t /= i;
		}
	}
	if( t == n)
		return 0;
	if( t != 1)
	{
		while( t )
		{
			sum += t%10;
			t /= 10;
		}
	}

	return sum;
}

int main()
{
	int i,sum,temp;
	int n;
	while( cin >> n && n)
	{
		if( n == 1) n = 2;
		for( i = n+1; ; i++)
		{
			sum = 0;
			temp = i;
			while( temp )
			{
				sum += temp%10;
				temp /= 10;
			}
			if( check( i ) == sum)
			{
				cout << i << endl;
				break;
			}
		}
	}
}
