#include <cstdio>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
typedef struct name
{
	char s[70];
	long i;
}name_id;
name_id info[100001];
int main()
{
	long u,m;
	int flag[20001];
	long min,max;
	int cas;
	scanf("%ld",&cas);
	//cin >> cas;
	int i,j,k;
	for(i=0;i<cas;i++)
	{
		scanf("%ld%ld",&u,&m);
		//cin >> u >> m;
		max=0;
		memset(flag,0,sizeof(flag));
		for(j=0;j<m;j++)
		{
			scanf("%s%ld",info[j].s,&info[j].i );
			//cin >> info[j].s >> info[j].i;
			flag[info[j].i]++;
			if(info[j].i > max && info[j].i <=u ) max=info[j].i ;
		}
		min=1000010;
		k=0;
		for(j=1;j<=u;j++)
			if(flag[j]<min && flag[j]!=0)
			{
				k=j;
				min=flag[j];
			}
		printf("Case %ld:\n",i+1);
		//cout << "Case " << i+1 << ":" << endl;
		for(j=0;j<m;j++)
			if(info[j].i == k)
			{
				printf("The winner is %s.\n",info[j].s);
				printf("The price is %ld.\n",k);
				//cout <<"The winner is " << info[j].s << "." << endl;
				//cout << "The price is " << k <<"." << endl;
				break;
			}
		if(i<cas-1) printf("\n");//cout << endl;
	}
}

