#include <stdio.h>
#include <iostream.h>
#include <math.h>
#define hypot(x,y) sqrt((x)*(x)+(y)*(y))

int x[101],y[101];
int n;

double test(double xx,double yy)
{
    double tot;
    tot=0;
    int i;
    for(i=0;i<n;i++)
    {
        tot+=hypot(x[i]-xx,y[i]-yy);
    }
    return tot;
}

int main()
{
    double xx,yy;
    double eps;
    int i,j;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x[i] >> y[i];
    }
    
    xx=5000;
    yy=5000;
    for(eps=5000;eps>=0.0001;eps*=0.9)
    {
        if(test(xx-eps,yy)<test(xx,yy)) xx=xx-eps;
        if(test(xx+eps,yy)<test(xx,yy)) xx=xx+eps;
        if(test(xx,yy-eps)<test(xx,yy)) yy=yy-eps;
        if(test(xx,yy+eps)<test(xx,yy)) yy=yy+eps;
    }
    printf("%0.0lf\n",test(xx,yy));
}
