#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	int i,j,k,m;
	int A[1000],B[1000];
	int min,max;
	int w,h;
	while( cin >> w)
	{
		if(w==0) break;
		for(i=0;;i++)
		{
			cin >> m >> n;
			if(m==-1&&n==-1)break;
			A[i]=m;
			B[i]=n;
		}
		h=0;
		max=w;
		min=0;
		int x=0;
		k=0;
	//	cout << i << endl;
		for(j=0;j<i;j++)
		{
		  if(w-A[j]>=0)
		  {
			  k+=A[j];
			  w=w-A[j];
			  min=min<B[j]?B[j]:min;
		  }
		  else if(w-A[j]<0)
		  {
			  if(k>x)x=k;
			  h=h+min;
			  min=B[j];
			  w=max-A[j];
			  k=A[j];
			  
		  }
			
		}
		 if(k>x)x=k;
		cout << x << " x " <<  h+min  << endl;
	}
}
