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
	set<long>::iterator iter;
	long i,j,k,n;
	long s;
	double m,t;
	k=(long)sqrt(2147483647*1.0);
	m=log(2147483647*1.0);
	for(i=2;i<=k;i++)
	{
		t=log(i*1.0);
		n=m/t;
		s=i;
		for(j=1;j<n;j++)
		{
			s*=i;
			if(s<=2147483647)
			{
				vec.insert(s);
				//break;
			}
			
		}
			

	}
	
	for(iter=vec.begin();iter!=vec.end();iter++)
		printf("%ld\n",*iter);
					

	
}