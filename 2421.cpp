#include<iostream>
using namespace std;
int main()
{
    long m[500001];
    bool n[5000000];
    long i;
    m[0]=0;
    n[0]=true;

    for( i=1;i<5000000;i++)
    n[i]=false;

    for(i=1;i<500001;i++)
    {
        if(m[i-1]-i>0&&n[m[i-1]-i]==false)
        {
            m[i]=m[i-1]-i;
            n[m[i]]=true;
        }
        else
        {
            m[i]=m[i-1]+i;
            n[m[i]]=true;
        }
    }
    int k;
    while(cin >> k&&k!=-1)
    {
        cout << m[k] << endl;
    }
}
