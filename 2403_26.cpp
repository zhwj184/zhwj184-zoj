#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
struct point
{
    float x;
    float y;
};
int main()
{
    point data[12][12];
    float x[12];
    int n;
    int i,j;
    float s;
    while( cin >> n && n)
    {
        for( i = 0; i < n; i++)
            scanf("%f",&x[i]);
        for( i = 0; i < n-1; i++)
            for( j = i+1; j < n; j++)
                if( x[i] > x[j])
                {
                    float temp = x[j];
                    x[j] = x[i];
                    x[i] = temp;
                }

        for( i = 0; i < n; i++)
            {
                data[1][i+1].x = x[i];
                data[1][i+1].y = 1.0;
            }

        if( n == 1)
            printf("%.4f 1.0000\n",data[1][1].x);
        else if( n == 2)
        {
            s = (data[1][2].x - data[1][1].x)/2.0;
            printf("%.4f %.4f\n",(data[1][2].x+data[1][1].x)/2.0,sqrt(4-s*s)+1.0);
        }
         if(n>=3)
         {
            for(i=1;i<n;i++)
            {
                          float  temp=(data[1][i+1].x-data[1][i].x)/2.0;
                         data[2][i].y=sqrt(4-temp*temp)+1.0;
            }
                     for(i=3;i<=n;i++)
                            for(j=1;j<=n-i+1;j++)
                                   data[i][j].y=data[i-1][j].y+data[i-1][j+1].y-data[i-2][j+1].y;
                     printf("%.4f %.4f\n",(data[1][1].x+data[1][n].x)/2.0,data[n][1].y);
         }
    }
}
