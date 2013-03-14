#include<iostream>
#include<cctype>
#include<cstring>
//#include <cstdlib>
#include <cmath>
#include<algorithm>
using namespace std;

const int MAX=1001;

struct node{
	int speed,weight;
	int index;
} ;

node mouse[MAX];
int path[MAX];
int dp[MAX];

bool operator<(const node& l ,const node& r){
 return (l.weight<r.weight)||(l.weight==r.weight&&l.speed<r.speed);
}

void print(int k)
{
	if(k==-1) return;
	print(path[k]);
	cout << mouse[k].index << endl;
}

int res;
int main()
{
	int i,j,k;
	int num=0;
	while( cin >> mouse[num].weight>> mouse[num].speed )
	{
		
		mouse[num].index=num+1;
		num++;
		//if(num==9) break;
	}
	sort(mouse,mouse+num);

	path[0]=-1;
	dp[0]=1;
	for(i=1;i<num;i++)
	{
		path[i]=-1;
		dp[i]=1;
		for(j=0;j<i;j++)
		{
			if(mouse[j].weight<mouse[i].weight && mouse[j].speed>mouse[i].speed)
			{
				if(dp[i]<dp[j]+1)
				{
					dp[i]=dp[j]+1;
					path[i]=j;
				}
			}
		}
	}

	int len=0;
	int pos=-1;
	for(i=0;i<num;i++)
		if(len<dp[i])
		{
			len=dp[i];
			pos=i;
		}

	cout << len << endl;
	print(pos);
	//return 0;
	//cin >> i >> j;
}
		



