#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
#define pi 3.141592653
int main()
{
	float s;
	float h,a,b;
	float r;
	while(cin >> h >> a >> b)
	{
        
         r=(a-b)/(a+b);
         s=pi*(a+b)*(64-3*pow(r,4))/(64-16*r*r);
         s*=h;
		 printf("%.2f\n",s);
	}
}