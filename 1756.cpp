#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct node{
	int x;
	int y;
	node(int a = 0, int b = 0):x(a), y(b){}
};

bool cmp(node a,node b)
{
	if(a.x==b.x) 
		return a.y<b.y;
	return a.x<b.x;
}

int reg[706];

int main()
{

	
	node s;
	while( cin >> s.x >> s.y , s.x !=-1 && s.y !=-1)
	{
		int m,n;
		int k;
		vector<node>vec;
		while(s.x && s.y)
		{
			vec.push_back(s);
			cin >> s.x >> s.y;
		}
		sort(vec.begin(),vec.end(),cmp);
		reg[0]=1;
		k=1;
		for(int i=1;i<vec.size();i++)
		{
			reg[i]=1;
			for( int j=0;j<i;j++)
			{
				if(vec[j].y > vec[i].y && reg[i] < reg[j]+1 )
					reg[i]=reg[j]+1;
			}
			if(k<reg[i])
				k=reg[i];
		}
		cout << k << endl;
	}
}



