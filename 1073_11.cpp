#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

char s[100],t[100];
int len;

void mult(int n)
{
    int i;
    int sum[100]={0};
    memset(sum,0,sizeof(sum));
    for(i=0;i<len;i++)
    {
        sum[i]=s[i]-'0';
        sum[i]*=n;
    }
    for(i=len-1;i>0;i--)
    {
        if(sum[i]>9)
        {
            sum[i-1]+=sum[i]/10;
            sum[i]=sum[i]%10;
        }
    }
    for(i=len-1;i>=0;i--)
        t[i]=sum[i]+'0';
    /*for(i=0;i<len;i++)
        cout << t[i];
        cout << endl;*/
       // cout << s << endl;
     /*  cout << len << endl;
    for(i=0;i<len;i++)
        cout << sum[i];
        cout << endl;*/

}

bool iscycle()
{
    int flag[100]={0};
    memset(flag,0,sizeof(flag));
    int i,j;
    for(i=0;i<len;i++)
        for(j=0;j<len;j++)
        {
            if(!flag[j] && s[i]== t[j])
            {
                flag[j]=1;
                break;
            }
        }
    for(i=0;i<len;i++)
        if(!flag[i]) return false;
    return true;
}
void solve()
{
    int i;
    len=strlen(s);
    for(i=2;i<=len;i++)
    {
        mult(i);
        if(!iscycle())
        {
            cout << s << " is not cyclic" << endl;
            return ;

        }
    }
    cout << s << " is cyclic" << endl;
}

int main()
{
#ifdef ONLINE_JUDGE
#else
       freopen("1073.txt","r",stdin);
#endif
       while (cin >> s)
              solve();
#ifdef ONLINE_JUDGE
#else
       fclose(stdin);
#endif
       return 0;
}

