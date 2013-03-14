#include<stdio.h>
#include<iostream.h>
main()
{
    int h,u,d,f;
    while(cin>>h>>u>>d>>f)
    {
        if(h==0&&u==0&&d==0&&f==0)break;
        int count=0;
        float s,t,k;
        s=0;
        t=u;
        k=f;
        float a;
        a=u*1.0*f/100;
        for(int i=0;;i++)
        {
            s+=t;
            if(s>h){printf("success on day %d\n",i+1);break;}
            s-=d;
            if(s<0){printf("failure on day %d\n",i+1);break;}
            t=t-a;
            if(t<0)t=0;
        }
    }
}




