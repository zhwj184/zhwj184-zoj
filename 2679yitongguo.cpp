/* the reason od failure is the array is too small */
#include<stdio.h>
main()
{
    int flag[20000];
    int repeat;
    int a[20000],b[20000],c[20000];
    int m,n;
    int num[20000];
    int i,j,k;
    long sum;
    int A[20000],B[20000];
    long price[20000];
    scanf("%d",&repeat);
    for(i=0;i<repeat;i++)
    {
        scanf("%d%d%d%d",&num[i],&a[i],&b[i],&c[i]);
        flag[i]=0;
        for(j=9;j>0;j--)
		{
		 for(m=9;m>=0;m--)
         {
            sum=j*10000+a[i]*1000+b[i]*100+c[i]*10+m;
            if(sum/num[i]==(1.0*sum/num[i]))
            {
              A[i]=j;
              B[i]=m;
              price[i]=sum/num[i];
              flag[i]=1;
              break;
            }
         }
		 if(flag[i])break;
		}
    }
    for(i=0;i<repeat;i++)
    {
        if(flag[i]==0)printf("0\n");
        else printf("%d %d %ld\n",A[i],B[i],price[i]);
    }
}


