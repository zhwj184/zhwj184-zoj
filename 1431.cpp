#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int B[200],C[200];
	char A[200][25];
	int i,j,k,m,n;
	char s1[5],s2[5];
	char t1[25],t2[5];
	n=0;
	while(cin >> t1)
	{
		n++;
		if(n>1)cout << endl;
		i=0;
		while(cin >> A[i] )
		{
			if((strcmp(A[i],"END"))==0)break;
			cin >> B[i] >> C[i];
            B[i]=C[i]-B[i];
			i++;
		}
		for(j=0;j<i-1;j++)
			for(k=j+1;k<i;k++)
			{
				if(B[k]>B[j])
				{
					strcpy(t1,A[k]);
					strcpy(A[k],A[j]);
					strcpy(A[j],t1);
					m=B[k];
					B[k]=B[j];
					B[j]=m;
				}
			}
	   for(j=0;j<i;j++)
		   cout << A[j] << endl;
	   }
}
