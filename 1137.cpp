#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int cx[1000], cy[1000];
bool match[1000][1000], use[1000];

bool path(int v,int n)
{
    for(int u = 0; u < n; u++)
    {
        if(!use[u] && match[v][u])
        {
            use[u] = true;
               if(cy[u] == -1 || path(cy[u],n))
               {
                    cy[u] = v;
                    cx[v] = u;
                    return true;
               }
        }
    }
    return false;

}

int maxmatch(int n)
{
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        if(cx[i] == -1)
        {
            memset(use,false,sizeof(use));
            if(path(i,n))
                c++;
        }
    }
    return c;
}

int main()
{
    int i,j,k,m,n;
    int x;
    while(cin >> n)
    {
        memset(match,false,sizeof(match));
        if(n==1)
        {
            printf("1\n");
            continue;
        }
        memset(cx,-1,sizeof(cx));
        memset(cy,-1,sizeof(cy));
        for(i = 0; i < n; i++)
        {
            scanf("%d: (%d)", &j, &k);
            //scanf("%d: (%d)",&j,&k);
            for(m = 0; m < k; m++)
            {
                scanf("%d",&x);
                match[j][x] = true;
            }
        }
        cout << (n - maxmatch(n) / 2) << endl;

    }
}
