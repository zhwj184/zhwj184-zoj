#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

int main()
{
	char a[200],b[202],c[202];
	int i,j,k,m,n;
	for(;;)
	{
		gets(a);
		if((strcmp(a,"ENDOFINPUT"))==0)break;
		gets(b);
		gets(c);
		k=strlen(b);
		for(j=0;j<k;j++)
		{
			if (isalpha(b[j]))
            {
				if(b[j]<'F')b[j]=b[j]+21;
				else b[j]=b[j]-5;
			}
			else
			{
				b[j]=b[j];
			}
		}
		cout << b << endl;
	}
}



