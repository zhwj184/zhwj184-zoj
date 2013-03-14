#include <iostream>
using namespace std;
int n,m;
int dfc(int current,int dep)
{
	if(current<=0||current>n)
		return 0;
    if(current==m)
		return 1;
	return dfc(current+2*dep-1,dep+1)+dfc(current-2*dep+1,dep+1);
}
int main()
{
	while(cin >> n >> m)
	{
		if(n==0&&m==0) break;
		if(n>=50||dfc(1,2))
			cout <<"Let me try!" << endl;
		else 
			cout << "Don't make fun of me!" << endl;
	}
}