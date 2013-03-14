#include <iostream.h>
int dan(int n)
{
	if(n==1) return 1;
	else if(n&1) return dan((n-1)/2)*2+1;
	else return dan(n/2)*2-1;
}
int main()
{
	double n;
	while( cin >> n)
	{
		int d=(int)n;
		if(n==0)break;
		cout << dan(d) << endl;
	}
}
