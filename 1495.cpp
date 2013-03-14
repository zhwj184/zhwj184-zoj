#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,n,b,c;
    int i,j,k;
    while(cin >> n && n!=0)
    {
        a=n;
        k=n;
        for(i=0;i<n;i++)
        {
            cin >> b;
            if(a<1)continue;
            //else if(a==1){a--;k--;}
            
            else
                {
                    if(b<=a){
                        a=b-1;
                        k--;
                 }
                  else
            {
                a--;
                k--;
            }

                }
        }
        cout << k << endl;
    }
}
    
