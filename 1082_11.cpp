#include <iostream>
#include <cstdio>
using namespace std;
#define inf 1000000000
int a[101][101];
int cost[101][101];
int n;

void solve()
{
    int i,j,d,min,max;
    int t;
    while(cin >> n && n)
    {
    for( i = 0;i < n; i++)
        for( j = 0; j < n;j++)
            if(i==j) a[i][j] = 0;
            else a[i][j] = inf;

    for( i = 0; i < n; i++)
    {
       // cin >> t;
       scanf("%d",&t);
        for( j = 0; j < t; j++)
        {
            scanf("%d%d",&d,&min);
            //cost[i][d-1] = j;
            a[i][d-1] = min;
        }
        
    }
    int k;
    for( i = 0; i < n; i++)
        for( j = 0; j < n; j++)
            for( k = 0; k < n; k++)
            {
                if(a[j][k] > a[j][i] + a[i][k])
                    a[j][k] = a[j][i] + a[i][k];
            }

    min = inf;
    max = 0;
    for( i = 0; i < n; i++)
    {
        max = 0;
        for( j = 0; j < n; j++)
        {
            if( a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        if(max < min )
        {
            min = max;
            k = i;
        }
    }
   // cout << "n= " << n << endl;
    cout << k+1 << " " << min << endl;
    }
}

int main()
{
    solve();
}

