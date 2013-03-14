#include<iostream.h>
int f(long n)
{
    if(n<3)return 0;
    if(n==3)return 1;
    else return f(n/2)+f(n-n/2);
}
main()
{
    long n;
    long count;
    while(cin>>n)
    {
        count=f(n);
        cout<<count<<endl;
    }
}
    
