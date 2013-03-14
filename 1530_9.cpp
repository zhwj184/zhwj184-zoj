#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int notfound;


void sear(int a[],int len,int rem,int n)
{
	int i;
	if(rem==0 && notfound)
	{
		notfound=0;
		for(i=0;i<len;i++)
			cout << a[i] ;
		cout << endl;
		return ;
	}
	else if(notfound && len<100)
	{
		a[len]=0;
		sear(a,len+1,(10*rem)%n,n);
		a[len]=1;
		sear(a,len+1,(10*rem+1)%n,n);
	}
}

int main()
{
	int n;
	int a[101];
	while(cin >> n && n!=0)
	{
		memset(a,0,sizeof(a));
		notfound=1;
		a[0]=1;
		sear(a,1,1,n);
	}
	return 0;
}