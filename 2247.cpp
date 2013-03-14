#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <cmath>
using namespace std;
int main( )
{
	double point[301][2];
	int n;
	int res;
	double x,y;
	int i,j,k;
	int min=0;
	while(cin >> n && n)
	{
		min=0;
		for(i=0;i<n;i++)
			cin >> point[i][0] >> point[i][1];
		for(x=0.0001;x<=10;i+=0.001)
			for(y=0.0001;y<=10;y+=0.0001)
			{
				res=0;
				for(i=0;i<n;i++)
					if((point[i][0]-x)*(point[i][0]-x)+(point[i][1]-y)*(point[i][1]-y)<=1)
						res++;
				if(min<res) min=res;
			}
		cout << min << endl;
	}
}


