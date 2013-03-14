#include <iostream>
#include <cctype>
#include <cstdio>
#include <cstdlib>
using  namespace std;

int main()
{
	char s[11];
    char t[101];
	char ss[11][11];
	int i,j,k,m,n;
	char c,ch;
	int flag[11];
	int min;
	int A[11];
	int d;
	char tt[11][11];
	while( cin >> s)
	{
		if((strcmp(s,"THEEND"))==0)break;
		cin >> t;
		m=strlen(s);
		n=strlen(t);
		if(n%m==0)k=n/m;
		else k=n/m+1;
	/*	for(i=0;i<k;i++)
			for(j=0;j<m;j++)
				ss[i][j]=(int)(rand()%26)+'A';
		for(i=0;i<k;i++)
			for(j=0;j<m;j++)
			{
				if((i+1)*(j+1)+j>k)break;
				ss[i][j]=t[i*m+j];
			}*/
		memset(flag,0,sizeof(flag));
		memset(A,0,sizeof(A));
		for(i=0;i<m;i++)
		{
			c='Z'+1;
			min=0;
			for(j=0;j<m;j++)
			{
			//	if(flag[j])continue;
				if(s[j]<c&&!flag[j]) 
				{
					c=s[j];
					min=j;
				
				}
			}
			A[i]=min;
			flag[min]=1;
		}
	//	for(i=0;i<m;i++) cout << A[i] << endl;
	//	d=0;
		for(i=0;i<m;i++)
			for(j=0;j<k;j++)
				 tt[j][A[i]]=t[i*k+j];
	//	        tt[A[i]][]=t[d++];
		for(i=0;i<k;i++)
		{
			for(j=0;j<m;j++)
				cout << tt[i][j];
         //   cout << endl;
		}
    
		cout << endl;
	}
}
		


