#include<iostream.h>
#include<stdio.h>
main()
{
    float w1,w2,t1,t2;
    float s1,s2;
    while(cin>>w1>>w2>>t1>>t2)
    {
        if(w1==0&&w2==0&&t1==0&&t2==0)
        break;
        if(w1*t1*4.19>(w2*(0-t2)*2.09+w2*335))printf("0.0 g of ice and %.1f g of water at %.1f C\n",w1+w2,(w1*t1*4.19-(w2*(0-t2)*2.09+w2*335))/(w1+w2)/4.19);
        else if( w1*t1*4.19+w1*335<w2*(0-t2)*2.09)printf("%.1f g of ice and 0.0 g of water at %.1f C\n",w1+w2,-(w2*(0-t2)*2.09-w1*t1*4.19-w1*335)/(w1+w2)/2.09);
       else
       {
         float i,j,m,n;
         m=w1*t1*4.19-w2*(0-t2)*2.09;
         n=m/335;
         i=w2-n;
         j=w1+n;
         printf("%.1f g of ice and %.1f g of water at 0.0 C\n",i,j);
       }
    }
}

