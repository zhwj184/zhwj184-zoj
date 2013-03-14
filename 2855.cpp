#include <cmath>
#include <iostream>
using namespace std;
#define pi 3.141592653589
int main()
{
	double x,y;
	double xx,yy;
	int i,k,j;
	double s,e,w,n;

	while(cin >> x >> y >> k)
	{
		w=-180*pi/180;
        e=180*pi/180;
		n=log(tan(pi/4+(85*pi/180)/2));
		s=log(tan(pi/4+(-85*pi/180)/2));
		x = x * pi / 180;
        y = log(tan(pi / 4 + (y * pi / 180) / 2)) ;
        cout << "t";
        for(i=0;i<k;i++)
		{
		//  cout << w << endl;
		//   cout << e << endl;
		  //  cout << s << endl;
		   //  cout << n << endl;
		   //  cout << x << endl;
		   //  cout << y << endl;
		   yy=(s+n)/2;
		   xx=(w+e)/2;
		   if(xx>x && yy>y){ e=xx;n=yy;cout << "t";}
		   else if(xx>x && yy<y) { e=xx;s=yy;cout << "q";}
		   else if(xx<x && yy>y) {w=xx;n=yy; cout << "s" ;}
		   else {cout << "r" ;w=xx;s=yy;}
		}
		cout << endl;
	}
}

