#include <stdio.h>
#include <iostream.h>
#include <ctype.h>
#include <string.h>
int main()
{
	int A[1001];
	int B[1001];
	int C[1001];
	int n;
	char s[10];
	int i=0;
	int m,p;
	while(cin >> s&&(strcmp(s,"#"))!=0)
	{
		cin >>A[i]>>B[i];
		i++;
	}
	for(int j=0;j<(i-1);j++)
		for(int k=j+1;k<i;k++)
		{
			if(A[k]<A[j])
			{
				m=A[k];
				A[k]=A[j];
				A[j]=m;
				m=B[k];
				B[k]=B[j];
				B[j]=m;
			}
		}
	int min,max;
	cin>> n;
	min=0;max=B[0];
	for(j=0;j<i;j++)
		C[j]=B[j];
	while(n--)
	{
		for( j=0;j<i;j++)
			if(max>C[j])
			{
				min=j;
				max=C[j];
			}
			C[min]+=B[min];
			cout << A[min];
	}
}



	


