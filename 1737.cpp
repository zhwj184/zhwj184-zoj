#include <cctype>
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	char s[7],t[26],t1[26];
	int i,j,k,m;
    char c,ch;
	cin >> n;
	while( n--)
	{
		cin >> s >> t;
		k=strlen(s);
		m=strlen(t);
       // cout << k << m << endl;
		for(i=k-1;i>=0;i--)
		{
			if(s[i]=='J')
			{
				c=t[m-1];
				for(j=1;j<m;j++)
					t1[j]=t[j-1];
				t1[0]=t[m-1];
				for(j=0;j<m;j++) 
					 t[j]=t1[j];
			//	t[0]=c;
			}
			else if(s[i]=='C')
			{
				c=t[0];
				for(j=0;j<m-1;j++)
					t1[j]=t[j+1];
				t1[m-1]=t[0];
			//	t[m-1]=c;
				for(j=0;j<m;j++) 
					 t[j]=t1[j];
			}
			else if(s[i]=='E')
			{
				if(m%2==0)
				{
				 for(j=0;j<m/2;j++)
				 {
					t1[j+m/2]=t[j];
				 }
				 for(j=m/2;j<m;j++)
				 {
					 t1[j-m/2]=t[j];
				 }
				}
				else
				{
				 for(j=0;j<m/2;j++)
				 {
					t1[j+m/2+1]=t[j];
				 }
				 for(j=m/2+1;j<m;j++)
				 {
					 t1[j-m/2-1]=t[j];
				 }
				 t1[m/2]=t[m/2];
				}
               for(j=0;j<m;j++) 
					 t[j]=t1[j];

			}
			
			else if(s[i]=='A')
			{
				for(j=0;j<m;j++) 
						t1[m-1-j]=t[j];
                for(j=0;j<m;j++) 
					 t[j]=t1[j];
			}
			else if(s[i]=='P')
			{
				for(j=0;j<m;j++)
				{
					if(t[j]=='0') t[j]='9';
					else if(t[j]>'0'&&t[j]<='9') t[j]=t[j]-1;
				}
			}
			else
			{
				for(j=0;j<m;j++)
				{
					if(t[j]=='9') t[j]='0';
					else if(t[j]>='0'&&t[j]<'9') t[j]=t[j]+1;
				}
			}
		}
	//	for(i=0;i<m;i++) cout << t[i];
		cout << t << endl;
	}
}






