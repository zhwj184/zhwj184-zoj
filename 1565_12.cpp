#include <iostream>
#include <cstdio>
using namespace std;

int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a>b?b:a;
}

int main()
{
   long T;
   long n,h,w;
   long x1[101],y1[101],x2[101],y2[101];
   int i,j,k,m;
   long x,y,xx,yy;
   //FILE *fp;
   //fp=fopen("1565.txt","r");
   //fscanf(fp,"%d",&T);
   cin >> T;
   while(T--)
   {
      scanf("%d%d",&h,&w);
       scanf("%d",&n);
      //fscanf(fp,"%d%d",&h,&w);
     // fscanf(fp,"%d",&n);
       int flag=-1;
       int sum=0;
       /*x=2000000000;
       y=2000000000;
       xx=-2000000000;
       yy=-2000000000;*/
       for( i = 0; i < n; i++)
       {
           scanf("%d%d%d%d",&x1[i],&y1[i],&x2[i],&y2[i]);
         //fscanf(fp,"%d%d%d%d",&x1[i],&y1[i],&x2[i],&y2[i]);
         /*  if(x1[i] < x) x = x1[i];
           if(y1[i] < y) y = y1[i];
           if(x2[i] > xx) xx = x2[i];
           if(y2[i] > yy) yy = y2[i];*/
           //if(flag) continue;

           //if(flag) continue;
           sum += (x2[i]-x1[i])*(y2[i]-y1[i]);
	   }
	   for( i = 0; i < n; i++)
           for( j = 0; j < n; j++)
           {
			   if( i == j) continue;
			   x = max(x1[i],x1[j]);
			   y = max(y1[i],y1[j]);
			   xx= min(x2[i],x2[j]);
			   yy= min(y2[i],y2[j]);
			   if( xx > x && yy > y)
			   {
				   flag = 1;
				   goto end;
			   }
		   }
              /* if( x1[i] >= x1[j] && x1[i] < x2[j] && y1[i] >= y1[j] && y1[i] < y2[j])
               {
                   flag=1;
                   break;
               }
               if( x2[i] > x1[j] && x2[i] <= x2[j] && y2[i] > y1[j] && y2[i] <= y2[j])
                {
                   flag=1;
                   break;
                }
               if(x1[i] <= x1[j] && y1[i] <= y1[j] && x2[i] >= x2[j] && y2[i] >= y2[j])
               {
                   flag=1;
                   break;
               }
			   if( x2[i] > x1[j] && x2[i] < x2[j] && y1[i] > y1[j] && y1[i] < y2[j])
               {
                   flag=1;
                   break;
               }
               if( x1[i] > x1[j] && x1[i] < x2[j] && y2[i] > y1[j] && y2[i] < y2[j])
                {
                   flag=1;
                   break;
                }*/

end:
	   for( i = 0; i < n && (flag == -1); i++)
	   {
		   if(!(x1[i] >= 0 && x1[i] <= h && y1[i] >=0 && y1[i] <= w ))
		   {
			   flag = 2;
			   break;
		   }
		   if(!(x2[i] >=0 && x2[i] <= h && y2[i] >= 0 && y2[i] <= w ))
		   {
			   flag = 2;
			   break;
		   }
	   }
       // if(flag==-1 && !(xx <= h && yy <= w && x>=0 && y>=0 ))
         //      flag = 2;
       //cout << "x= " << x << " xx= " << xx ;
       if(flag==-1 && sum < w*h)
           flag=3;
       else if(flag==-1 && sum==w*h)
           flag=0;
       if(flag==1)
           cout << "NONDISJOINT" << endl;
       else if(flag==2)
           cout << "NONCONTAINED" << endl;
       else if(flag==3)
           cout << "NONCOVERING" << endl;
       else
           cout << "OK" << endl;
   }
}