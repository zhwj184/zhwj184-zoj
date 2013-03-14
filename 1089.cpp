#include<stdio.h>
int main()
{
 int n,i,j,k,o,p,q,b=0;
 int a[50];
 while(1)
 {
  scanf("%d",&n);
  if(n==0)
   break;
  if(b==1)
   printf("\n");
  for(i=0;i<n;i++)
   scanf("%d",a+i);
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
    for(k=j+1;k<n;k++)
    {
     for(o=k+1;o<n;o++)
     {
      for(p=o+1;p<n;p++)
      {
       for(q=p+1;q<n;q++)
       {
        if(b==0)
        {
         b=1;
         printf("%d %d %d %d %d %d\n",a[i],a[j],a[k],a[o],a[p],a[q]);
        }
        else
        {
         printf("%d %d %d %d %d %d\n",a[i],a[j],a[k],a[o],a[p],a[q]);
        }
       }
      }
     }
    }
   }
  }
 }
 return 0;
}
