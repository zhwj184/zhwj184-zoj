#include "iostream"
#include <stdio.h>
using namespace std;

//2006-12-10 06:52:55 Accepted 2656 C++ 00:04.33 916K Time Limit Exceeded
//ÀÕ∑÷Ã‚

int main ()
{
    int i,j,k;
    int n,m,flag;
    int d[10001][2];
    for(;scanf("%d",&n)!=EOF;)
    {
        for(i=0;i<n;i++)
        scanf("%d%d",&d[i][0],&d[i][1]);
           //  cin >> d[i][0] >> d[i][1];
             flag=0;
        for(i=0;i<n;i++)
        {
            m=0;


            for(j=0;j<n;j++)
            {
                m+=d[(i+j)%n][0];
                if(m<d[(i+j)%n][1])
                {


                    break;
                }
                else
                {

                  m-=d[(i+j)%n][1];
                }
            }
            if(j==n){flag=1;break;}
        }
        if(flag)printf("%d\n",i);
        //cout << i << endl;
        else
        printf("impossible\n");
        // cout << "impossible" << endl;
    }
}


