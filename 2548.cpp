#include <string>
#include <iostream>
#include <cctype>
#include <cstring>
#include <list>
#include <cmath>
using namespace std;

int course[10000];
int main()
{
	int m,n;
	int i,j,k;
	int a;
	char test[5];
	int flag=0;
	int coun;
	int req;
	while( cin >> m && m) 
	{
		flag=0;
		cin >> n;
		memset(course,0,sizeof(course));
		for(i=0;i<m;i++)
		{
			cin >> test;
			a=(test[0]-'0')*1000+(test[1]-'0') *100 + (test[2]-'0') * 10 + (test[3]-'0');
			course[a]=1;
		}
		for(i=0;i<n;i++)
		{
			cin >> k >> req;
			coun=0;
			for(j=0;j<k;j++)
			{
				cin >> test;
			    a=(test[0]-'0')*1000+(test[1]-'0') *100 + (test[2]-'0') * 10 + (test[3]-'0');
				if(course[a]==1)
					coun++;
			}
			if(coun<req) flag=1;
		}
		if(flag) cout << "no" << endl;
		else cout << "yes" << endl;
	}
}




