#include<stdio.h>
#include<iostream.h>
#include<math.h>
#define pi 3.141592653
main()
{
    int D,V;
    while(cin>>D>>V)
    {
        if(D==0&&V==0)break;
        float k;
        k=D*D*D-6*V/pi;
        float m;
        m=pow(10,log10(k)/3);
        printf("%.3f\n",m);
    }
}
