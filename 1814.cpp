#include <iostream.h>
#include <stdio.h>
int main()
{
    int b[1000];
    int max,min;
    max=1000000;
    min=0;
    int n;        int count=0;
    while(cin >> n && n!=0) {
        for(int i=0; i<n;i++)
           cin >> b[i];
         count=0;
        int temp;
        int k;
        int flag=1;
        while(flag==1)
        {

            for(int i=0;i<(n-1);i++)
            {
                if(b[i]!=b[i+1]) {count++;flag=1;break;}
                else flag=0;
            }
             for(int i=0;i<n;i++)
             {b[i]=b[i]/2; }
             temp=b[n-1];
             for(int i=n;i >=2;i--)
             {
                 b[i-1]=b[i-2]+b[i-1];
                 if(b[i-1]%2==1)
                 b[i-1]+=1;
             }
             b[0]=b[0]+temp;
             if(b[0]%2==1)
             b[0]+=1;
          }



       cout << count << " " << b[0] << endl;
    }
}
                    

