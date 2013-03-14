#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
long b[2000001];
memset(b,0,sizeof(b));
	for(int i=0;i<32;i++)
	{
		for(int j=0;j<32;j+=2)
			for(int k=0;k<32;k+=4)
				for(int l=0;l<32;l+=8)
					for(int m=0;m<32;m+=16)
						if(i+j+k+l+m<32)
							b[i+j+k+l+m]++;
	}

	for(int j=3;j<=2000000;j++)
	{
	   if(j%2==0) b[j]=(b[j/2]+b[j-1])%1000000;
	   else b[j]=(b[j-1])%1000000;
    }
    long n;
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        cout << b[n] << endl;
    }

	//for(int i=0;i<32;i++)
	//cout << b[i] << endl;
}
