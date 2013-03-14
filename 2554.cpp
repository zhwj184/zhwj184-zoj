#include <iostream.h>
#include <stdio.h>
int main()
{

   int p[200005][2];
   int i,j,k;
   int A,B;
   int n;
   while(scanf("%d",&n)&&n!=0)
   {
       for(i=0;i<n;i++)
         scanf("%d%d",&p[i][0],&p[i][1]);
       j=p[n/2][0];
       k=p[n/2][1];
       A=0;
       B=0;
       for(i=0;i<n;i++)
       {
          if((p[i][0]>j&&p[i][1]>k)||(p[i][0]<j&&p[i][1]<k)) A++;
          if((p[i][0]>j&&p[i][1]<k)||(p[i][0]<j&&p[i][1]>k)) B++;
       }
       printf("%d %d\n",A,B);
   }
}
          
