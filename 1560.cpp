#include <string>
#include <iostream>
#include <cctype>
#include <cstring>
#include <list>
#include <cmath>
using namespace std;


#define PI 3.141592653589

int n;
int main()
{ 

	   double x1,x2,y1,y2,x3,x4,y3,y4;
	   double s,t;
	   double x,y;
	   double ang1,ang2;
	   int cas;
	   //double s,t;
	   int a=0;
	   cin >> cas;
	   while(cas--){
		   cin >> x1 >> y1 >> ang1;
		   cin >> x2 >> y2 >> ang2;

		   //ang1+=90.0;
		   //ang2+=90.0;

		   //if(ang1>=180.0) ang1-=180.0;
		   //if(ang2>=180.0) ang2-=180.0;
			if(ang1<=90.0) ang1=90.0-ang1;
			else if( ang1<=180.0) ang1=180.0-ang1+90.0;
			else if( ang1<=270.0) ang1=270.0-ang1;
			else ang1=360.0-ang1+90.0;

			if(ang2<=90.0) ang2=90.0-ang2;
			else if( ang2<=180.0) ang2=180.0-ang2+90.0;
			else if( ang2<=270.0) ang2=270.0-ang2;
			else ang2=360.0-ang2+90.0;

			//cout << ang1 << " " << ang2 << endl;

		   

		   s=ang1*PI/180.0;
		   t=ang2*PI/180.0;

		   s=tan(s);
		   t=tan(t);

		   if(ang1!=90.0 && ang2==90.0 )
		   {
				x=x2;
				y=s*(x-x1)+y1;
		   }
		   else if(ang2!=90.0&& ang1==90.0)
		   {
			   x=x1;
			   y=t*(x-x2)+y2;
		   }
		   else {
				x=(s*x1-t*x2+y2-y1)/(s-t);
				y=s*(x-x1)+y1;
		   }
		   printf("%.4f %.4f\n",x,y);
		   //cout << x << endl << y << endl;	  
		
		}
}
