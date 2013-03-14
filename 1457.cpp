#include "stdio.h"
int n;
int ans[20],p[40];

int isp(int a)
{
                int flag,i;
                flag=1;
                for(i=2;i<a;i++)
                                if(a%i==0)
                                {
                                                flag=0;
                                                break;
                                 }
                return flag;
}

void fun(int a)                      /*input the ath number*/
{
                int i,j,flag;
                if(a==1)
                {
                                ans[1]=1;
                                fun(2);
                }
                else if(a<n)
                                for(i=2;i<=n;i++)
                                {
                                                flag=1;
                                                for(j=2;j<a;j++)
                                                if(ans[j]==i)
                                                {
                                                     flag=0;
                                                                                break;
                                                }
                                                if(flag&&p[i+ans[a-1]])
                                                {
                                                ans[a]=i;
                                                fun(a+1);
                                                }
                                }
                else if(a==n)
                                for(i=2;i<=n;i++)
                                {
                                                flag=1;
                                                for(j=2;j<a;j++)
                                                if(ans[j]==i)
                                                {
                                                      flag=0;
                                                                                break;
                                                }
                                                if(flag&&p[i+ans[a-1]]&&p[i+1])
                                                {
                                                for(j=1;j<n;j++)
                                                {
                                                printf("%d ",ans[j]);
                                                }
                                                printf("%d\n",i);
                                                }
                                }
}

int main()
{
                int i,I;
                I=1;
                for(i=2;i<40;i++)
                  p[i]=isp(i);
                while(scanf("%d",&n)!=EOF)
                {
                printf("Case %d:\n",I++);
                 if(n%2==0)
                  fun(1);

                 printf("\n");
                }
}
