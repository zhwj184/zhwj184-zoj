#include <iostream>
using namespace std;
int m, n;
int check()
{
	int r = 0;
	for (int i = 2; i != n; ++i){
	r = (r + m) % i;
	}
	if (r == 0) 
		return 1;
	else
		return 0;
}
int main()
{
	while(cin >> n && n)
	{
		m=1;
		while(!check()) m++;
		cout << m << endl;
	}
}