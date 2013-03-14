#include<iostream>
using namespace std;

int main()
{
    int n;
    double v[100000],t[100000];
    while(cin>>n)
    {
        double min=10000;
        if(n==0) break;
        for(int i=0;i<n;i++) cin>>v[i]>>t[i];
        for(int i=0;i<n;i++)
        {
            if(t[i]>=0)
            {
                double arrive=4500/(v[i]*1000/3600)+t[i];
                if(arrive<min) min=arrive;
            }
        }
        if((int)min<min) cout<<(int)min+1<<endl;
        else cout<<(int)min<<endl;
    }
    return 0;
}
