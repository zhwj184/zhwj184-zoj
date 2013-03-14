#include <iostream.h>
#include <stdio.h>
int main()
{
    int x,y,dx,dy,s;
    int i;
    while(scanf("%d%d%d%d%d",&s,&x,&y,&dx,&dy))
    {
        if(s==0&&x==0&&y==0&&dx==0&&dy==0)
           break;
        for(i=0;i< 2000000 && (x%s == 0 || y%s == 0 || x%(2*s)/s == y%(2*s)/s);i++)
        {
          //  if(x%s==0||y%s==0||x%(2*s)/s==y%(2*s)/s)
            //  break;
            x+=dx;
            y+=dy;
        }
        if (i < 2000000)
         printf("After %d jumps the flea lands at (%d, %d).\n", i,x,y);
        else
         printf("The flea cannot escape from black squares.\n");
   }
}
