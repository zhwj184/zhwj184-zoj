#include <stdio.h>
#include <math.h>
#include <iostream.h>
int main()
{
 
	long a,b,c,n,m;
	long p,q;
	while(cin >> p >> q)
	{
		if(p+q==0)break;
		c=0;
		for(b=q;b<=50000&&!c;b++)
		  for(a=p;a<=b;a++)
		  {
			  if(a*(a-1)*q==b*(b-1)*p)
			  {
				  m=a;
				  n=b-a;
				  c=1;
				  break;
			  }
		  }
		  cout << m << " " << n << endl;
	}
}