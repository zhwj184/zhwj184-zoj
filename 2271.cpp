#include <stdio.h>
#include <malloc.h>
#include<iostream>
using namespace std;
int main()
{
	double p[101][101];
	double pp[101][101];
	double flag1,flagb;
	int dir[101][101];
	double res;
	int i,j,k;
	int s;
	int n;
	while(cin >> n)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				p[i][j]=0;
				pp[i][j]=0;
			}

		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			dir[i][j]=4;
			if(i==0||i==n-1) dir[i][j]=dir[i][j]-1;
			if(j==0||j==n-1) dir[i][j]=dir[i][j]-1;
		}
		p[n/2][n/2]=1;
		k=n;
		res=0;
		s=-1;
		while(k--)
		{
			s++;
			for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
			//	p[i][j]=0;
				pp[i][j]=0;
			}			
            if(s>0) p[n/2][s-1]=0;
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
				{
					if(p[i][j]>0){
				    if(i-1>=0) pp[i-1][j]+=(p[i][j]/dir[i][j]);
					if(i+1<n)  pp[i+1][j]+=(p[i][j]/dir[i][j]);
					if(j-1>=0) pp[i][j-1]+=(p[i][j]/dir[i][j]);
					if(j+1<n)  pp[i][j+1]+=(p[i][j]/dir[i][j]);
					//p[i][j]=0;
					}
				}
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
				{
					p[i][j]=pp[i][j];
				//	cout << p[i][j] << " ";
				//	if(j==n-1) cout << endl;
				}
			res+=pp[n/2][s];

			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
				{
					p[i][j]=pp[i][j];
				//	cout << p[i][j] << " ";
				//	if(j==n-1) cout << endl;
				}
			
		}
		printf("%.4f\n",res);
	}
}







	 


			


