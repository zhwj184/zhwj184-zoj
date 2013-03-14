#include <iostream.h>
#include <ctype.h>
#include <string.h>
int main()
{
	int t;
	int N;
	int i,j,k;
	long area;
	cin >> t;
	while(t--)
	{
		cin >> N;
		area=1000*1000*1000;
	 for (i=1;i*i*i<=N;i++) {
         for (j=i;i*j*j<=N;j++) {
			 if(N%(i*j)!=0)continue;
			 k=N/(i*j);
			 if(area>2*i*j+2*i*k+2*j*k)
				 area=2*i*j+2*i*k+2*j*k;
		 }
	 }
		 cout << area << endl;

	}

	
}

