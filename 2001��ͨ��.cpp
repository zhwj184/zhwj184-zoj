#include<iostream.h>
main()
{
    int r;
    int m,n;
    cin>>r;
    int t;
    while(r--)
    {
        cin>>m>>n;
        int k=0;
        int p=0;
        while(m)
        {
            k=k*10+m%10;
            m/=10;
        }
        while(n)
        {
            p=p*10+n%10;
            n/=10;
        }
        t=k+p;
        while(t%10==0)t/=10;
        int s=0;
        while(t)
        {
            s=s*10+t%10;
            t/=10;
        }
        cout<<s<<endl;
    }
}
