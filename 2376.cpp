#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
       int n;
       int i,min,max;
       int yuan[1000000],yubn[1000000];
       int a,b;
       scanf("%d",&n);
       getchar();
       while(n--)
       {
              min=1000000;max=-1;
              scanf("%d%d",&a,&b);
              getchar();
              for(i=0;i<b;i++)
              {
                     scanf("%d",&yuan[i]);
                     getchar();
                     if(yuan[i]>a/2)
                            yubn[i]=a-yuan[i];
                     else
                            yubn[i]=yuan[i];
                     if(yubn[i]<min)
                            min=yubn[i];
                     if(yubn[i]>max)
                            max=yubn[i];
              }
              printf("%d %d\n",max,a-min);
       }
       return 0;
}

