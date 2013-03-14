#include <iostream>
#include <cctype>
#include <cstring>
using namespace std; 
int main()
{    
	int i, j; 
	int n;
	int k,m;
	int max,sum;
	char s[200],t[200];
	while( cin >> s )
	{
		if(strcmp(s,"-1")==0)break;
		cin >> t;
		m=strlen(s);
		n=strlen(t);
		max=0;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				if(s[i]==t[j])
				{
					sum=1;
					for(k=1;i+k<m&&j+k<n;k++)
						if(s[i+k]==t[k+j])sum++;
					if(sum>max)max=sum;
				}
			}
		if(max!=0)
		{
			i=2*max;
			j=m+n;
			for(k=2;k<=i;k++)
			{
				if(i%k==0&&j%k==0)
				{
					i/=k;
					j/=k;
					k--;
				}
			}
	if(j!=1)
       cout<<"appx("<<s<<","<<t<<") = " << i << "/" << j <<endl;
   else
       cout<<"appx("<<s<<","<<t<<") = " << i << endl;
  }
  else
  {   
   cout<<"appx("<<s<<","<<t<<") = " << max << endl;
  }
}
	
} 
