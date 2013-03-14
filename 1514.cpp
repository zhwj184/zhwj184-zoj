#include <stdio.h>
#include <iostream.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4;
    int a;
    int n;
    float s,t;
    float x,y;
    cin >> n;
    while(n--)
    {
        y=0;
        y=0;
        cin >> y1 >> y1 >> y2 >> y2 >> y3 >> y3 >> y4 >> y4;
        if(x1==x2&&x1==x3&&x3==x4) a=0;
        else if(x1==x2&&x3==x4&&x1!=x2) a=1;
        else if(x1==x2&&x3!=x4)
        {
            a=2;
            x=x1;
            y=(y4-y3)/(x4-x3)*(x-x3)+y3;
        }
        else if(x3==x4&&x1!=x2)
        {
            a=2;
            x=x3;
            y=(y2-y1)/(x2-x1)*(x-x1)+y1;
        }
        else if((y4-y3)*(x2-x1)==(y2-y1)*(x4-x3)&&(y4-y3)*(x2-x3)==(y2-y3)*(x4-x3))
        a=0;
        else if((y4-y3)*(x2-x1)==(y2-y1)*(x4-x3)&&(y4-y3)*(x2-x3)!=(y2-y3)*(x4-x3))
        a=1;
        else
        {
            s=(y4-y3)/(x4-x3);
            t=(y2-y1)/(x2-x1);
            x=((y2-y3)-s*x3+t*x2 )/(t-s);
            y=s*(x-x3)+y3;
            a=2;
        }
        cout << "INTERSECTING LINES OUTPUT" << endl;
        if(a==1) cout <<"NONE" << endl;
        else if(a==0) cout << "LINE" << endl;
        else printf("POINT %.2f %.2f\n",x,y);
    }
}

        

  
