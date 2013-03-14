#include <iostream.h>
#include <math.h>

int main()
{

	int t;
	int n;
	int A[51][10000];
	int i,j,m;
	int k;
	int B[51];
	cin >> t;
	while(t--)
	{

		cin >> n;
		for(i=1;i<=n;i++)
		{
			
			B[i]=0;
		
		}
		int flag=1;
		for(i=1;;i++)
		{

            flag=0;
			for(j=1;j<=n;j++)
			{
				
				if(B[j]==0)
                {
                 A[j][B[j]]=i;
                 k=j;
                 B[j]+=1;
                 flag=1;
                 break;
                }
				else
                if(sqrt(A[j][B[j]-1]+i)==int(sqrt(A[j][B[j]-1]+i)))
					{
						A[j][B[j]]=i;
						k=j;
						B[j]+=1;
					    flag=1;
                        break;
					}
				
				
				}
			if(!flag)
			{
				m=i;
				break;
			}	
		
		}
		cout << m-1 << endl;
		
		
	}
	return 0;
}
