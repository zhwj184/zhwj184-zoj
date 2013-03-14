#include <iostream>
#include <cctype>
#include <string>
#include <cmath>
using namespace std;
double dis(double x1,double y1,double x2,double y2)
{
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main()
{
	double x1,x2,x3,y1,y2,y3;
	int lenght,angle;
	double len1,len2,len3;
	while( cin >> x1 )
	{
		if(x1==-1) 
		{
			cout << "End of Output" << endl;
			break;
		}
		cin >> y1 >> x2 >> y2 >> x3 >> y3;
		len1=dis(x1,y1,x2,y2);
		len2=dis(x1,y1,x3,y3);
		len3=dis(x2,y2,x3,y3);
		if(len1==leng2&&len2==len3) lenght=0;
		else if(leng1==len2||len2==len3||len1==len3) lenght=1;
		else lenght=2;
		if((x2-x1)*(x3-x1)+(y2-y1)*(y3-y1)<0) angle=0;
		else if((x1-x2)*(x3-x2)+(y1-y2)*(y3-y2)<0) angle=0;
		else if((x1-x3)*(x2-x3)+(y1-y3)*(y2-y3)<0) angle=0;
		else if((x2-x1)*(x3-x1)+(y2-y1)*(y3-y1)==0) angle=1;
		else if((x1-x2)*(x3-x2)+(y1-y2)*(y3-y2)==0) angle=1;
		else if((x1-x3)*(x2-x3)+(y1-y3)*(y2-y3)==0) angle=1;
		else angle=2;

		if(lenght==0) cout << "Equilateral " ;
		else if(lenght==1) cout << "Isosceles ";
		else cout << "Scalene ";
		if(angle==0) cout << "Obtuse" << endl;
		else if(angle==1) cout << "Right" << endl;
		else cout << "Acute" << endl;
	}
}


	