#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

#define MIN(a,b) ((a)<(b)?(a):(b))

int  account[32];
char name[32][32];
int n,t;
int i,j,k;

void solve()
{
    while(1)
    {
        for(i=0;i<n;i++)
            if(account[i]>0) break;
        for(j=0;j<n;j++)
            if(account[j]<0) break;
        if(i==n && j==n) break;
        k=MIN(account[i],-account[j]);
        cout << name[i] << " " << name[j] << " " << k << endl;
        account[i]-=k;
        account[j]+=k;
    }
}

int main()
{
    char t1[32],t2[32];
    int cas=0;
    int tran;
    int a,b;
    while( cin >> n >> t)
    {
        if(n==0 && t==0) break;
        cas++;
        cout << "Case #" << cas << endl;
        for(i=0;i<n;i++)
            cin >> name[i];
        memset(account,0,sizeof(account));
        for(i=0;i<t;i++)
        {
            cin >>  t1 >> t2 >> tran;
            a=0;
            b=0;
            for(j=0;j<n;j++)
            {
                if(strcmp(t1,name[j])==0)
                    a=j;
                if(strcmp(t2,name[j])==0)
                    b=j;
                //if(a+b>0)
                   // break;
            }
            account[a]-=tran;
            account[b]+=tran;
           // cout << a << " " << b << " " << tran << endl;
        }
        solve();
        cout << endl;
    }
}

            
