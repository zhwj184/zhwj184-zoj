#include <iostream>
using namespace std;
int main()
{
    int car[1500];
    int leave[1500];
    int n,cas;
    int t;
    int m;
    int k;
    int i,j;
    cin >> cas;
    while( cas--)
    {
        cin >> n >> t >> m;
        t*=2;
        if(m%n==0) k=m/n;
        else k=m/n+1;
        int s=0;
        int a=m-(k-1)*n;
        for(i=0;i<a;i++)
        {
            cin >> leave[0];
        }
        for(j=1;j<k;j++)
        for( i=0; i<n; i++)
        {
            cin >> leave[j];
        }
        for(i=0;i<k-1;i++)
         {
            if(leave[i]+t>leave[i+1])
                leave[i+1]=leave[i]+t;
         }
        // cout  << k << " " << a << endl;
         cout << leave[k-1]+t/2 << " " << k << endl;
    }
}
        
