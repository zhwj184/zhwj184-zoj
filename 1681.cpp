#include <iostream.h>
#include <math.h>

int main()
{
	int n;

	int m;
	while(cin >> m&&m!=0)
	{
	    int flag=1;
	    n=m;
	
	    int max=n;
		for(int j=0;j<=n;j++)
		{
		   for(int i=1;i<=n;i++)
		   {
            if(max>n-j*j*j-(i*i*i-i)/6&&n-j*j*j-(i*i*i-i)/6>=0){max=n-j*j*j-(i*i*i-i)/6;if(max==0)break;}
		    if(n<j*j*j+(i*i*i-i)/6)break;
           }
           if(j*j*j>n)break;
           if(max==0)break;
		}
		cout << n-max << endl;
	


	}
}
			
