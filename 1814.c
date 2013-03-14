#include <iostream.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	int n;
	int A[1000],B[1000];
	int flag,i,j,k,m;
	int count;
	while( cin >> n)
	{
		if(n==0) break;
		for(i=0; i< n; i++)
		{
			cin >> A[i];
			B[i]=A[i];
		}
		count=0;

		flag=1;
		while( flag)
		{
		
			for(i=0;i<n;i++) B[i]=A[i]/2;
          //  k=A[n-1]/2;
			for(i=1;i<n;i++)
			{
				A[i]=B[i]+B[i-1];
			
			}
			A[0]= B[0]+B[n-1];
			for(i=0;i<n;i++)
			{
					if(A[i]%2==1) A[i]+=1;
			}

		//	if(A[0]%2==1) A[0]+=1;
			count++;	
			flag=0;
			for(i=0;i<n-1;i++)
				if(A[i] != A[i+1])
				{
					flag=1;
					break;
				}
		}
		cout << count << " " << A[0] << endl;
	}
}
