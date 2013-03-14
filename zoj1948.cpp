/*
#include <iostream>
#include <deque>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <string>
using namespace std;

const long MAX=1000000;
int group[MAX];
int size[1000];
deque<int> order;
deque<int> que[1000];
vector<int>::iterator iter;

#define ENQUEUE "ENQUEUE"
#define DEQUEUE "DEQUEUE"
#define STOP "STOP"


int main()
{
	int t;
	int x;
	int N;
	char szCommand[100];
	int num = 0;

	while(scanf("%d", &t) != EOF)
	{
		if(0 == t)
			break;
		
		memset(group, -1, sizeof(group));
		memset(size, 0, sizeof(size));

		++num;

		for(int i = 0; i < 1000; ++i)
		{
			que[i].clear();
		}

		order.clear();
		
		for(int i = 0; i < t; ++i)
		{
			scanf("%d", &N);
			for(int j = 0; j < N; ++j)
			{
				scanf("%d", &x);
				group[x] = i;
			}
		}

		printf("Scenario #%d\n", num);

		while(scanf("%s", szCommand))
		{
			
			if(strcmp(szCommand, STOP) == 0)
			{
				break;
			}
			else if(strcmp(szCommand, DEQUEUE) == 0)
			{
				int k = order.front();
				printf("%d\n", que[k].front());
				que[k].pop_front();
				--size[k];
				if(size[k] == 0)
				{
					order.pop_front();
				}

			}
			else if(strcmp(szCommand, ENQUEUE) == 0)
			{
				scanf("%d", &x);				
				int k = group[x];
				++size[k];
				que[k].push_back(x);
				if(size[k] == 1)
				{
					order.push_back(k);
				}

			}

		}
		
		printf("\n");

	}

	return 0;
}
*/