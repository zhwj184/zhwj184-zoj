#include <math.h>
#include <iostream.h>
#include <stdio.h>
int main()
{
    double n,p;
    double k;
    while( cin >> n >> p )
    {
        /*k=log10(p)/n;
        //k=ceil(k);
        k=pow(10,k);
        if((int)k!=k)k+=1; */
       // cout << (int ) k << endl;
       k=pow(p,1.0/n);
       printf("%.0lf\n",k);
    }
}
