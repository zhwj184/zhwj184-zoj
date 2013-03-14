 #include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
#define M_PI 3.14159265358
int n;
double lat[1001],lng[1001];
double z[1001],x[1001],y[1001];
double best,now,d;
int res;
int main()
{
    int i,j,k;
    while( cin >> n)
    {
      for(i=0;i<n;i++)
      {
        cin >> lat[i] >> lng[i];
        z[i] = sin(lat[i]*M_PI/180);
        x[i] = cos(lng[i]*M_PI/180) * cos(lat[i]*M_PI/180);
        y[i] = sin(lng[i]*M_PI/180) * cos(lat[i]*M_PI/180);
      }
      best=-1;
      res=0;
      for(i=0;i<n;i++)
      {
        now=1;
        for(j=0;j<n;j++){
            d=x[i]*x[j]+y[i]*y[j]+z[j]*z[i];
            if(d<now) now=d;
        }
        if(best<now) {
            res=i;
            best=now;
         }
      }
      printf("%.2f %.2f\n",lat[res],lng[res]);
      //cout << lat[res] << " " << lng[res] << endl;
    }
}
