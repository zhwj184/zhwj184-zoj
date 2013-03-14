#include<iostream.h>
double dis(double x,double y,double z);
int main()
{
    int k,m;
    double xx[200],yy[200],zz[200];
    double x[200],y[200],z[200];
    int i,j;
    int ret;
    double s1,s2,s3;
    while( cin >> k >> m)
    {
        ret=0;
        if(k==0&&m==0) break;
        for(i=0;i<k;i++)
         cin >> xx[i] >> yy[i] >> zz[i];
        for(i=0;i<m;i++)
         cin >> x[i] >> y[i] >> z[i];

        for(i=0;i<m;i++)
        {
            s1=dis(x[i],y[i],z[i]);
            for(j=0;j<k;j++)
            {
                s2=dis(xx[j],yy[j],zz[j]);
                s3=dis(x[i]-xx[j],y[i]-yy[j],z[i]-zz[j]);
                if(s1+s3<=s2)
               {
                ret++;
                break;
                }
            }
        }
        cout << ret << endl;
    }
}
double dis(double x,double y,double z)
{
    return x*x+y*y+z*z;
    
}



