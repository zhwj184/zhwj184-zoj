 #include<stdio.h>
int a[1002];
int m,n,j,i,d,max,k,yiyoude;
int main()
{
 k=0;
 int xx=0;
while(1)
{
   xx++;

   scanf("%d%d",&n,&m);
   if (n==0&&m==0)break;
   for(i=0;i<1000;i++)a[i]=0;
   for(i=0;i<m;i++)
   {
    scanf("%d",&k);
    a[k]=1;
   }
   max=0;
   yiyoude=0;
   for(i=m*n;i>0;i--)
   {
    if(a[i])yiyoude++;
    else yiyoude--;
    if(yiyoude>max)max=yiyoude;
   }
  printf("Case %d: %d\n",xx,max);
}
return 1;
}
