#include <iostream.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	int n,c,m;
	int A[21],B[1000],C[1000];
	int sum,max;
	int i,j,k;
	int flag;
	int t=1;
	while( cin >> n >> m >> c)
	{
		if( n==0 && m==0 && c==0 ) break;
		for(i=0;i<n;i++)
			cin >> A[i];
		sum=0;
		flag=0;
		max=0;
        memset(B,0,sizeof(B));
		for(i=0;i<m;i++)
		{
			cin >> C[i];
		}
		for(i=0;i<m;i++)
		{
			if(B[C[i]-1]==0)
			{
				sum+=A[C[i]-1];
				B[C[i]-1]=1;
				if(sum>c)
				{
					flag=1;
					break;
				}
			}
			else 
			{
				B[C[i]-1]=0;
				sum-=A[C[i]-1];
			}
			if(max<sum)
				max=sum;
		}
		if(flag)
		{
			cout << "Sequence " << t << endl;
			cout <<"Fuse was blown." << endl;
		}
		else 
		{
			cout << "Sequence " << t << endl;
			cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was " << max << " amperes." << endl;
		}
		cout << endl;
		t++;
	}
}

			




