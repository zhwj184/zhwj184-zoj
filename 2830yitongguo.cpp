#include <iostream.h>
int main()
{
	long int  n;
	int flag;
	while(cin >> n) {
		if(n==0) break;
		int count=0;
		if(n==3||n==2)count=1;
		
		while(n>3) {
			
			if(n%3==0){
				 n=n/3;
                 count+=n;
			}
			else if(n%3==1&&n>3) {
			    n=(n-1)/3;
				count+=n;
				n+=1;
			
			
			}
			else if(n%3==2&&n>3) {
				n=(n-2)/3;
				count+=n;
				n+=2;
			
			}
			if(n==2||n==3)count++;
		
		}


		cout << count << endl;
	}
}
