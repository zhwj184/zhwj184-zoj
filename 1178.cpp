#include <stdio.h>
#include <iostream.h>
int main()
{
	int n,i,j,k,m;
	int A[101],B[101];
	while( cin >> n)
	{
		if(n==0)break;
		for(i=0;i<n;i++)
			A[i]=1;
		m=n;
		if(n%4==3)
		{
			A[n]=-1;
			n=n+1;
		}
		else if(n%4==2)
		{
			A[n]=-1;
			A[n+1]=-1;
			n+=2;
		}
		else if(n%4==1)
		{
			A[n]=-1;
			A[n+1]=-1;
			A[n+2]=-1;
		    n+=3;
		}
		cout << "Printing order for "<<  m  << " pages:" << endl;
	//	cout << n << endl;
		for(j=0,k=1;j<n/2;j+=2,k++)
		{
			if(A[n-j-1]==1||A[j]==1)
			{
				cout << "Sheet " << k << ", front: ";
			if(A[n-j-1]==-1) cout << "Blank, " << j+1 << endl;
			else   cout << n-j << ", " << j+1 << endl;
			}
			if(A[n-j-2]==1||A[j+1]==1)
			{
			cout << "Sheet " << k << ", back : ";
			if(A[n-j-2]==-1) cout << j+2 << ", Blank"  << endl;
			else   cout << j+2 << ", " << n-j-1 << endl;
			}
		}
	}
}


