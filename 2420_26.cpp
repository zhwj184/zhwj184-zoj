#include<cstdio>
#include<iostream>
using namespace std;
char week[7][10]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
int year[2]={365,366};
int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};

int type(int m)
{
    if((m%4==0&&m%100!=0)||(m%400==0))
            return 1;
    else
             return 0;
}

int main()
{
    int n;
    int i,j,k;
    while( cin >> n && n!=-1)
    {
        k=n%7;
        for(i=2000;n>=year[type(i)];i++)
        {
            n-=year[type(i)];
        }
        for(j=0;n>=month[type(i)][j];j++)
        n-=month[type(i)][j];
        printf("%d-%02d-%02d %s\n",i,j+1,n+1,week[k]);

    }
}
