#include<iostream.h>
#include<math.h>
int main()
{
    long t;
    long n;
    int count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long  i;
        double s;
        s=0;
        for(i=1;i<=n;i++)
        {
           s+=log10(i);
        }
        count=int(s)+1;
        cout<<count<<endl;
    }
}
