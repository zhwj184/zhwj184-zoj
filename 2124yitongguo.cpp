#include<stdio.h>
#include<iostream.h>
main()
{
    long x,b,p;
    long r;
    long y;
    while(scanf("%ld",&x)!=-1&&x)
    {
       p=0;
       y=x;
       if(x<0)y=-x;
       for(b=2;b*b<=y;b++)
       {
           r=b*b;
           p=2;
           while(r<y)
           {
            r=r*b;
            p++;
           }
           if(y==r)
           {
            if(x>0||p%2)
            {
               printf("%d\n",p);
               p=1;
               break;
            }
           }
       }
       if(p!=1)printf("1\n");
    }
}

 #include <stdio.h>
int main()
{
 double x,y,b,r;
 int p;
 while(scanf("%lf",&x)!=-1&&x)
 {
  p=0;
  y=x;
  if(x<0)
   y=-x;
  for(b=2;b*b<=y;b++)
  {
   r=b*b;
   p=2;
   while(r<y)
   {
    r=r*b;
    p++;
   }
   if(r==y)
   {
    if(x>0||p%2)
    {
     printf("%d\n",p);
     p=1;
     break;
    }
   }
  }
  if(p!=1)printf("1\n");
 }
}
