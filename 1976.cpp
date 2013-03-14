#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
unsigned  n,m;
unsigned int mm[300000][20];
int i,j,k;

unsigned solve(unsigned int a,unsigned int b)
{
    if(a>b) swap(a,b);
    if(a==0)
        return 1;
    else if(a==1)
        return b+1;
    if(mm[b][a]==0) mm[b][a]=solve(a-1,b)+solve(a,b-1);
    return mm[b][a];
}
int main()
{         for( i=0;i<300000;i++)
            for( j=0;j<20;j++)
                mm[i][j]=0;
    while( cin >> n >> m)
    {
        if(n==0 && m==0)
            break;
        //if(n<m) swap(n,m);

        cout << solve(n,m) << endl;
    }
}
