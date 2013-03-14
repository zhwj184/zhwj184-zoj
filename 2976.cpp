#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
struct point{
	double x,y,z;
}p;
double dis(double x,double y,double z,double x0,double y0,double z0)
{
	return  sqrt((x-x0)*(x-x0)+(y-y0)*(y-y0)+(z-z0)*(z-z0));
}
using namespace std;
int main()
{
	int T;
	int n;
	double x[101],y[101],z[101],I[101];
	double min,max;
	int i,j;
	cin >> T;
	while(T--)
	{
		cin >> n;
		for(i = 0; i < n;i++)
			cin >> x[i] >> y[i] >> z[i] >> I[i];
		min = 0;
		max = 0;
		for(i = -100; i <= 100; i++)
		{
			for(j = -100; j <= 100; j++)
			{
				min = 0;
				for(int k = 0; k < n; k++)
				{
					double temp = dis(i,j,0,x[k],y[k],z[k]);
					min += (I[k] * z[k] / (temp * temp * temp));
				}
				if(max < min)
					max = min;
			}
		}
		printf("%.2f\n",max);

	}

}