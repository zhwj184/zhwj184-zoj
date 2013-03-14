#include <string>
#include <iostream>
#include <cctype>
#include <cstring>
#include <list>
#include <cmath>
#include <algorithm>
using namespace std;

double a[202];
double b[202];
double c[202];
double d[202];

double t[404];
double s[404];
int cas=0;
int n;
int k=0;
int p=0,q;
int i,j;
double area;
int main()
{
	cout.precision(2);
	while( cin >> n )
	{
		if(n==0) break;
		cas++;
		k=0;
		
		for( i=0;i<n;i++)
		{
			cin >> a[i] >> b[i] >> c[i] >> d[i];
			t[k]=a[i];
			s[k]=b[i];
			k++;
			t[k]=c[i];
			s[k]=d[i];
			k++;
		}
		sort(t,t+k);
		sort(s,s+k);

		area=0.0;
		for(i=0;i<k-1;i++)
		{
			for(j=0;j<k-1;j++)
			{		
				for( q=0;q<n;q++)
				{
					if((t[i]>=a[q]) && (s[j]>=b[q]) && (t[i+1]<=c[q]) && (s[j+1] <=d[q]))
					{
						area+=(t[i+1]-t[i])*(s[j+1]-s[j]);
						break;
					}

				}
			}
		}
		cout << "Test case #" << cas << endl;
		cout << "Total explored area: " ;
		
		cout << fixed << area << endl;
		cout << endl;

	}
	return 0;
	
}


