#include <stdio.h>
#include <iostream.h>
int isinter(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{	
        int a=1;
        double x,y,s,t;
        if(x1==x2&&x1==x3&&x3==x4) {if((y3>=y1&&y3<=y2)||(y4>=y1&&y4<=y2)) a=0;}
        else if(x1==x2&&x3==x4&&x1!=x2) a=1;
        else if(x1==x2&&x3!=x4)
        {

            x=x1;
            y=(y4-y3)/(x4-x3)*(x-x3)+y3;
            if(y>=y1&&y<=y2||y>=y2&&y<=y1)a=0;
        }
        else if(x3==x4&&x1!=x2)
        {

            x=x3;
            y=(y2-y1)/(x2-x1)*(x-x1)+y1;
             if(y>=y1&&y<=y2||y>=y2&&y<=y1)a=0;
        }
       else if((y4-y3)*(x2-x1)==(y2-y1)*(x4-x3)&&(y4-y3)*(x2-x3)==(y2-y3)*(x4-x3))
        {if((x3>=x1&&x3<=x2)||(x4>=x1&&x4<=x2)||(x1>=x3&&x1<=x4)||(x2>=x3&&x2<=x4)) a=0;}
       else if((y4-y3)*(x2-x1)==(y2-y1)*(x4-x3)&&(y4-y3)*(x2-x3)!=(y2-y3)*(x4-x3))
        a=1;
        else
        {
           // cout << "YES" << endl;

            s=(y4-y3)/(x4-x3);
            t=(y2-y1)/(x2-x1);
            x=((y3-y2)-s*x3+t*x2 )/(t-s);
            y=s*(x-x3)+y3;

            if(x>=x1&&x<=x2&&x>=x3&&x<=x4){
            a=0;
           // cout << x << endl << y << endl;
           // cout << "intersec" << endl;
            }
        }
        if(a==0)return 1;
        return 0;
       // if(a==1) cout <<"NONE" << endl;
       // else if(a==0) cout << "LINE" << endl;
      //  else printf("POINT %.2f %.2f\n",x,y);

}
int main()
{
    double x1[2001],y1[2001],x2[2001],y2[2001];
    int i,j,k,m,n;
    while(cin >> n)
    {
        for(i=0;i<n;i++) cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        if(n==1)cout << "ok!" << endl;
        else
        {
            int flag=0;
            for(i=0;i<n-1;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(isinter(x1[i],y1[i],x2[i],y2[i],x1[j],y1[j],x2[j],y2[j]))
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag) break;
            }
            if(flag) cout << "burned!" << endl;
            else cout << "ok!" << endl;
        }
    }
}
