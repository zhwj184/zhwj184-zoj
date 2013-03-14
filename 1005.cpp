

#include<cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,ta,tb;
    int flag[5000];
    long i,j,k,m,n;
    scanf("%d%d%d",&a,&b,&c);

        tb=b;ta=0;
        flag[0]=2;
        i=1;


        while(1)
        {
            flag[i++]=1;

            if(tb+ta>a)
            {
                tb-=a-ta;
                if(tb==c) break;
                flag[i++]=0;

                ta=0;
            }
            else
            {
                ta+=tb;
                if(ta==c) break;
                 flag[i++]=2;

                tb=b;
            }
        }
        cout << i << endl;
        for(j=0;j<i;j++)
        {
            if(flag[j]==1) printf("POUR(2,1)\n");
            else if(flag[j]==2) printf("FILL(2)\n");
            else printf("DROP(1)\n");
        }



}


