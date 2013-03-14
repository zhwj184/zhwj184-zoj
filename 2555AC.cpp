#include <iostream>
#include <cstdlib>
using namespace std;

class str{
	
public:
	char p[1000001];
	long n;
	str() {
		n=0;
		memset(p,0,sizeof(p));
	}
	void work()
	{
		for(long i=1;i<n;i++)
			p[i]='1';
		for(unsigned long long i=1;i<n;i++)
			p[(i*i)%n]='0';
	}
	void print()
	{
		for(long i=1;i<n-1;i++)
			cout << (char) p[i] ;
		cout << (char) p[n-1] << endl;
	}
};
int main()
{
	str stri;
	while(cin >> stri.n && stri.n)
	{
		if(stri.n==2) cout << "Impossible" << endl;
		else
		{
			stri.work();
			stri.print();
		}
	}
}