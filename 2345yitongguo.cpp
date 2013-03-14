#include<stdio.h>
int main()
{
   int a,i,j,k,n,h,m,b[30],f[30][30][2];
   scanf("%d",&n);
   for(k=0;k<n;k++){
      a=0;
      for(h=0;a!=-1;h++){
         scanf("%d",&m);
         if(m!=0){
            f[k][h][0]=m;
            for(j=0,i=1;j<m;i++)
               j+=i;
            f[k][h][1]=(i-1)*i*(2*i-1)/6-(j-m)*(i-1);
         }
         else
            a=-1;b[k]=h;
      }
   }
   for(i=0;i<n;i++){
      for(j=0;j<b[i];j++)
         printf("%d %d\n",f[i][j][0],f[i][j][1]);
      if(i!=(n-1))printf("\n");
   }
   return(0);
}
