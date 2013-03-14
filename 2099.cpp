#include <iostream.h>

int main() {
    long x,y;
    long minx,miny,maxx,maxy;
    int flag1=1,flag2=1;
    long t,s;
    while(flag2) {
            minx=miny=2000000000;
            maxx=maxy=0;

       while(flag2) {
            cin>>x>>y;
            t=x;
            s=y;
            if(!flag1&&x==0&&y==0)
            {flag2=0;break;}
            else if(flag1&&x==0&&y==0)
            {
             flag1=0;
             cout<<minx<<" "<<miny<<" "<<maxx<<" "<<maxy<<endl;
             break;
            }
            else flag1=1;
            if(minx>x)minx=x;
            if(miny>y)miny=y;
            if(maxx<x)maxx=x;
            if(maxy<y)maxy=y;
       }
     }
  }
             
            

            
            

