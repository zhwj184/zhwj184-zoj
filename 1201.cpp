#include <iostream.h>
#include <string.h>
int main()
{
	int A[51],B[51];
	int i,j,k,m,n;
	char c;
	while(cin >> n)
	{
		if(n==0)break;
		memset(B,0,sizeof(B));
		cin >> c;
		for(i=0;i<n;i++)
			cin >> A[i];

		if(c=='P')
		{
			for(j=0;j<n;j++)
			{
				for(i=0;i<j;i++)
					if(A[i]>A[j]) B[A[j]-1]++;
			}
		}
		else
		{
			
			for(j=0;j<n;j++)
			{
				for(i=0;i<n;i++)
				{
				  if(B[i]==0&&A[j]==0)break;
				  else if(B[i]==0) A[j]--;

				}
				B[i]=j+1;

			}
			 
		}
		for(i=0;i<n-1;i++)
			cout << B[i] << " ";
		cout << B[n-1] << endl;
	}
}


