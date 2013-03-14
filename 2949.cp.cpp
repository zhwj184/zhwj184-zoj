#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <set>
using namespace std;

int main()
{
	set<long> vec;
	long i,j,k,m,n;
	long s,t;
	k=(long)sqrt(2147483647);
	for(i=4;i<=k;i++)
	{
		m=(long)log(i);
		for(j=m;j>=2;j--)
		{
			s=m/j;
			for(n=2;n<=s;n++)
				if(i==pow(j,n));
					//vec.
		}
	}
					

	
}