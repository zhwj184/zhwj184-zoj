#include <stdio.h>
#include <math.h>
#include<iostream.h>
#define MAX 44.0
#define e exp(1.0f)
#define lowest 1e-6
double a, mid ;

void  wokd()
{
    double low = e ;
    double up = MAX ;
    double x, y = a/log(a) ;
    while(low<=up)
    {
        mid=(low+up)/2;
        x=mid/log(mid);
        if(x==y)return ;
        else if(x>y)
        {
            up=mid-0.000001;
        }
        else
            low=mid+0.000001;
    }
}

int main()
{
    while(cin>>a)
    {
        if(a>e) { cout << "-1" << endl;continue;}
        wokd();
        printf("%.5lf\n",mid);
    }
}
