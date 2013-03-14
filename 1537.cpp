#include <iostream.h>
int main()
{
    int i,j,k,m,n;
    int a,b;
    int x;
    while( cin >> k)
    {
        a=0;
        for(i=1;i<=9;i++)
        {
            x=0;
            for(j=1;j<k;j++)
            {
                x=(x*10+i)%k;
                if(x==0)
                {
                    a=i;
                    b=j;
                    break;
                }
            }
            if(a!=0)break;
        }
        if(a==0) cout << "-1" << endl;
        else cout << a << " " << b << endl;
    }
}
