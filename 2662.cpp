#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	double pi[10001];
	double sm,sn;
	int sign,newsign;

	int m,n,k;
	int i;
	while( cin >> m >> n >> k)
	{
		for(i=0;i<k;i++)
			scanf("%lf",&pi[i]);
		sm=0.0;
		sn=0.0;
		sign=0;
		newsign=1;

		for(i=0;i<k;i++)
		{
			if(i>=m)
				sm-=pi[i-m];
			if(i>=n)
				sn-=pi[i-n];
			sm+=pi[i];
			sn+=pi[i];
			if(i<n-1)
				newsign=0;
			else if(sm/m-sn/n>0)
				newsign=1;
			else 
				newsign=-1;
			if(newsign!=sign)
			{
				sign=newsign;
				if(newsign==1)
					printf("BUY ON DAY %d\n",i+1);
				else 
					printf("SELL ON DAY %d\n",i+1);
			}
		}
	}
}
