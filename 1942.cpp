#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
int main()
{
	int flag;
	float x,y,C[501][501];
	int i,j,k,m,n;
	int A[1001],B[1001];
	int top;
	int S[1001];
	float max;
	int t=0;
	while((scanf("%d",&n))!=EOF)
	{
		if(n==0)break;
		++t;
		for(i=0;i<n;i++)
			scanf("%d%d",&A[i],&B[i]);
	//	printf("\n");
		for(j=0;j<n;j++)
			for(i=0;i<n;i++)
		{
			C[i][j]=sqrt((double)((A[i]-A[j])*(A[i]-A[j])+(B[i]-B[j])*(B[i]-B[j])));
		}
	 for (k=0; k<n; k++)
      for (i=0; i<n; i++)
       for (j=0; j<n; j++)
     	 C[i][j] = MIN(C[i][j],MAX(C[i][k],C[k][j]));
		printf("Scenario #%d\n",t);
        printf("Frog Distance = %.3f\n\n",C[0][1]);
	}
}
	/*
		top=2;
		S[0]=0;
		S[1]=1;
		flag=0;
		*/
	
	/*	for(i=0;i<top;i++)
		{
			flag=0;
			for(j=0;j<top;j++)
			{
				if(i==j)continue;
				for(k=2;k<n;k++)
				{
					if(C[S[i]][k]<max&&C[k][S[j]]<max)
					{
						S[top++]=k;
						max=(C[i][k]>C[k][j]?C[i][k]:C[k][j]);
						flag=1;
						break;
					}
				}
			}
			if(flag==0)break;
		}
	*/



