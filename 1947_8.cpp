#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int m,n;
int best;
int node[26][26];

void visit(int i,int l)
{
    for(int j=0;j<n;j++)
        if(node[i][j])
        {
            node[i][j]=node[j][i]=0;
            visit(j,l+1);
            node[i][j]=node[j][i]=1;
        }
    if(l>best) best=l;
}
int main()
{
    int i,j,k;
    while( cin >> n >> m )
    {
        if(n==0 && m==0) break;
        memset(node,0,sizeof(node));
        for(i=0;i<m;i++)
        {
            cin >> j >> k;
            node[j][k]=1;
            node[k][j]=1;
        }
        best=0;
        for(j=0;j<n;j++)
        {
            visit(j,0);
        }
        cout << best << endl;
    }
}

