#include <cstdio>
#include <cstring>
#include <cassert>
#include <iostream>
#include <cctype>
using namespace std;

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MAXCITIES 256
#define oo 1000000000

int kase=0;
int n,r;
int w[MAXCITIES][MAXCITIES];
char city[MAXCITIES][30];
char start[30],dest[30];
int numcities;
int cas=0;

int addcity(char s[])
{
	int i;
	for(i=0;i<numcities;i++)
		if(strcmp(s,city[i])==0)
			return i;
	strcpy(city[i],s);
	numcities++;
	return i;
}

int main()
{
	int i,j,k;
	int d,s;
	while( cin >> n >> r)
	{
		cas++;
		numcities=0;
		if(n==0&&r==0)
			break;

		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				w[i][j]=0;
		for(i=0;i<n;i++)
			w[i][i]=oo;

		for(i=0;i<r;i++)
		{
			cin >> start >> dest >> kase;
			d=addcity(start);
			s=addcity(dest);
			w[d][s]=kase;
			w[s][d]=kase;
		}

		for(k=0;k<numcities;k++)
			for(i=0;i<numcities;i++)
				for(j=0;j<numcities;j++)
					w[i][j]=MAX(w[i][j],MIN(w[i][k],w[k][j]));
		cin >> start >> dest;
		d=addcity(start);
		s=addcity(dest);
		cout << "Scenario #" << cas << endl;
		cout << w[d][s] << " tons" << endl;
		cout << endl;
	}
}