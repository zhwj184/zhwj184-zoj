#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int A[27],B[27];
	int C[27],D[27];
	int i,j,k,m,n;
	int t;
	char s[3];
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> s;
			if(s[0]>'0'&&s[0]<='9')
				A[i]=s[0]-'0';
			else if(s[0]=='T') A[i]=10;
			else if(s[0]=='J') A[i]=11;
			else if(s[0]=='Q') A[i]=12;
			else if(s[0]=='K') A[i]=13;
			else if(s[0]=='A') A[i]=14;
			if(s[1]=='H')B[i]=4;
			else if(s[1]=='S')B[i]=3;
			else if(s[1]=='D')B[i]=2;
			else if(s[1]=='C')B[i]=1;
		}
			for(i=0;i<n;i++)
		{
			cin >> s;
			if(s[0]>'0'&&s[0]<='9')
				C[i]=s[0]-'0';
			else if(s[0]=='T') C[i]=10;
			else if(s[0]=='J') C[i]=11;
			else if(s[0]=='Q') C[i]=12;
			else if(s[0]=='K') C[i]=13;
			else if(s[0]=='A') C[i]=14;
			if(s[1]=='H')D[i]=4;
			else if(s[1]=='S')D[i]=3;
			else if(s[1]=='D')D[i]=2;
			else if(s[1]=='C')D[i]=1;
		}
	   for(i=0;i<(n-1);i++)
		   for(j=i;j<n;j++)
		   {
			   if(A[j]<A[i]){
				   m=A[j];
				   A[j]=A[i];
				   A[i]=m;
				   m=B[j];
				   B[j]=B[i];
				   B[i]=m;
			   }
			   else if(A[j]==A[i]&&B[j]<B[i])
			   {
				    m=A[j];
				   A[j]=A[i];
				   A[i]=m;
				   m=B[j];
				   B[j]=B[i];
				   B[i]=m;
			   }
			    if(C[j]<C[i]){
				   m=C[j];
				   C[j]=C[i];
				   C[i]=m;
				   m=D[j];
				   D[j]=D[i];
				   D[i]=m;
			   }
			   else if(C[j]==C[i]&&D[j]<D[i])
			   {
				    m=C[j];
				   C[j]=C[i];
				   C[i]=m;
				   m=D[j];
				   D[j]=D[i];
				   D[i]=m;
			   }
		   }
		k=0;
		i=n-1;
		j=n-1;
		while(i>=0&&j>=0)
		{
			if(C[j]>A[i])
			{
				k++;
				i--;
				j--;
			}
			else if(C[j]==A[i]&&D[j]>B[i])
			{
				k++;
				i--;
				j--;
			}
			else if(C[j]==A[i]&&D[j]==B[i])
			{
				k++;
				i--;
				j--;
			}
			else
			{
				i--;
			}
		}
		cout << k << endl;
	}
}




