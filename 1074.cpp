#include<stdio.h>
int m[101][101];
int rec[101][101][101];
int main()
{
       int n,i,j;
    int x1,y1,x2,y2;
    int temp,max=-32768;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
              for(j=1;j<=n;j++)
                     scanf("%d",&m[i][j]);
    for(y1=0;y1<=n;y1++)
              for(x1=0;x1<=n;x1++)
                     for(y2=y1;y2<=n;y2++)
                     {
                            temp=0;
                            for(x2=x1;x2<=n;x2++)
                            {
                                   if(y1==y2) {rec[x2][y1][y1]=m[x2][y1];}
                                   else {rec[x2][y1][y2]=rec[x2][y1][y2-1]+m[x2][y2];}
                                   temp=temp+rec[x2][y1][y2];
                                   if(temp>max) max=temp;
                            }
                     }
       printf("%d\n",max);
       return 0;
}
