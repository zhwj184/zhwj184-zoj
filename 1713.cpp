#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
	char s[7]="T.T^__^";
	long f0,f1,f2,f[1000];
	long n,i,j,k;
	while(cin >> n){
		i=1;
	    f[0]=3;
		f[1]=4;
		for(i=2;;i++)
		{
			f[i]=f[i-1]+f[i-2];
			if(f[i]>n){j=i; break;}
		}
		
		while(n>7){
			n-=f[j-1];
			j-=2;
		}
		cout << s[n] << endl;
	}
}

	