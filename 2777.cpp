#include <stdio.h>
#include <stdlib.h>
#include<iostream.h>

#define MAX_SIZE 1000

int countsGCD[MAX_SIZE+1];

int GCD(int i, int j)
{
	int q;

	if(i == 0)
	{
		return j;
	}
	if(j == 0)
	{
		return i;
	}
	q = (i % j);
	while(q > 0)
	{
		i = j;
		j = q;
		q = (i % j);
	}
	return j;
}
		
void MakeGCDCounts()
{
	int i, j, cnt;
	countsGCD[0] = 0;
	countsGCD[1] = 3;
	for(i = 2 ; i <= MAX_SIZE ; i++)
	{
		cnt = 0;
		for(j = 1; j < i ; j++)
		{
			if(GCD(i,j) == 1)
			{
				cnt++;
			}
		}
		countsGCD[i] = countsGCD[i-1] + 2*cnt;
	}
}

void Init()
{
	MakeGCDCounts();
}

int main()
{
    int cas;
    Init();
    int i,j,k;
    cin >> cas;
    for(i=1;i<=cas;i++)
    {
        cin >> k;
        cout << i << " " << k << " " << countsGCD[k] << endl;
    }
}
    
