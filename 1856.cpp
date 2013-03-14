#include <stdio.h>
#include <math.h>
#include <iostream.h>
int main()
{
 
	double long a,b,c,n,m;
	double long p,q;
	while(cin >> p >> q)
	{
		if(p+q==0)break;
		c=0;
		for(b=2;b<=50000;b++)
		{
		  	  a=b*(b-1)*p;
			  while(c*(c-1)*q<a)c++;

			  if(a==c*(c-1)*q)
			  {
				  m=c;
				  n=b-c;
				  break;
			  } 
		  }
		if(b<=50000)  cout << m << " " << n << endl;
	    else cout << "impossible" << endl;
	}
}