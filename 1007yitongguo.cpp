#include <stdio.h>
#define min 1e-14

int main()
{
    double s,t,x,k;

    for(x=0; x<2.0005; x+=0.001)
    {
        s = (5-x)/4;
        t = (x-4)/6 + 1/(1+x);
        for(k=2; k<11000; k+=1)
        {
            s += t;
            t = (1/(k+x) + (x-2)/(k+1) + (1-x)/(k+2)) / k;
        }
        printf("%5.3f %16.12f\n",x,s);
    }
    return 0;
}

