#include <iostream.h>
#include <math.h>
#include <stdio.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    double A,B,C;
    int i,j,k,m,n;
    double r1,r2,r3;
    while(cin >> x1)
    {
        cin >> y1 >> x2 >> y2 >> x3 >> y3;
        A=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        B=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        C=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        r3=(B+C-A)/2;
        r1=(A+C-B)/2;
        r2=(A+B-C)/2;
        printf("%.6lf\n",r1);
          printf("%.6lf\n",r2);
            printf("%.6lf\n",r3);
       // cout << r1 << endl;
       // cout << r2 << endl;
       // cout << r3 << endl;
    }
}
        
