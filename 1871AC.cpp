#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long x,y;
	long step;
	long t;
	while( cin >> x) {
		cin >> y;
		step=(int)sqrt((double)(y-x));
		if(y-x==0) cout << "0" << endl;
		else if(y-x==1) cout << "1" << endl;
		else if(y-x==2) cout << "2" << endl;
		//cout << step << endl;
		else if(step*step==y-x) cout << step*2-1 << endl;
		else {
			t=y-x-step*step;
			if( t>(2*step+1)/2) cout << step*2+1 << endl;
			else cout << step*2 << endl;
		}
	}
}