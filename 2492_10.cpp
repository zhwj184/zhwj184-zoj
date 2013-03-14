#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	int leftx,left,rightx,right;
	int flag,now;
	char test[256];
	int cas;
	cin >> cas;
	while(cas--)
	{
		cin >> test;
		int len=strlen(test);
		flag=1;
		now=0;
		leftx=0;
		left=0;
		rightx=0;
		right=0;
		int i;
		for(i=0;i<len;i++)
		{
			if(test[i]>='0' && test[i] <='9')
			{
				now=now*10+(test[i]-'0');
			}
			else if(test[i]=='-'||test[i]=='+')
			{
				left=now*flag+left;
				now=0;
				if(test[i]=='-')flag=-1;
				else flag=1;
			}
			else if(test[i]=='x')
			{
				if(now==0) now=1;
				leftx=now*flag+leftx;
				now=0;
				//flag=-1;

			}
			else if(test[i]=='=')
			{
				left=left+now*flag;
				break;
			}
		}
		flag=1;
		now=0;
		//cout << "test[i]= " << test[i] << endl; 
		for(int j=i+1;j<len;j++)
		{
			if(test[j]>='0' && test[j] <='9')
			{
				now=now*10+(test[j]-'0');
				if(j==len-1)right=now*flag+right;
			}
			else if(test[j]=='-'||test[j]=='+')
			{
				right=now*flag+right;
				now=0;
				if(test[j]=='-')flag=-1;
				else flag=1;
			}
			else if(test[j]=='x')
			{
				if(now==0) now=1;
				rightx=now*flag+rightx;
				now=0;
				//flag=-1;

			}
		}

		//cout << "left:" << left << "  leftx: " << leftx << endl;
		//cout << "right:" << right << " rightx: " << rightx << endl;
		if(leftx==rightx) {
			if(left==right) cout << "IDENTITY" << endl;
			else cout << "IMPOSSIBLE" << endl;
		}
		else {
			if((right-left)%(leftx-rightx)!=0) cout << (int) ( (right-left)/(leftx-rightx)) -1 << endl;
			else cout << (int) ( (right-left)/(leftx-rightx)) << endl;
		}
	}
}