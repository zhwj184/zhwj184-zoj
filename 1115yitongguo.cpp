#include<iostream.h>
using namespace std;
int fun(int n)
{
    int a=0;
    if(n<10)return n;
    else
    {
        while(n)
        {
            a+=n%10;
            n/=10;
        }
        return fun(a);
    }
}

main()
{
    char s[1000][1000];
    long k[1000];
    int i=0;
    int sum;
    int m,j;
    for(i=0;;i++)
    {
        cin>>s[i];
        if((strcmp(s[i],"0"))==0){m=i;break;}
        sum=0;
        int j=strlen(s[i]);
        for(int m=0;m<j;m++)
        sum+=(s[i][m]-'0');
        k[i]=fun(sum);

    }
    for(j=0;j<m;j++)cout<<k[j]<<endl;
}
        
    
