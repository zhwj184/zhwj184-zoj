#include <stdio.h>
#include <iostream.h>
#include <string.h>
int main()
{
  bool flag[8][70000];
  int i,j,k;
  int a[7];
  int sum,mid;
  int t=0;
  while(1){
    t++;
    mid=0;
    sum=0;
    for(i=1;i<=6;i++)
    {
        scanf("%d",&a[i]);
      //cin >> a[i];
    }   sum=0;
       for(i=1;i<=6;i++)
        {
            if(a[i]>10)
            a[i]=a[i]%10+10;
            sum+=a[i]*i;
        }

    if(a[6]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0) break;
    printf("Collection #%d:\n",t);

    //cout << "Collection #"<< t << ":\n";
      // printf("Collection #%d:\n",p++);
       // if(sum%2) {printf("Can't be divided.\n\n"); continue;}
    if(sum%2) {
        printf("Can't be divided.\n\n");
       // cout << "Can't be divided.\n\n";
        continue;
     }
    else mid=sum/2;
    memset(flag,0,sizeof(flag));
    for(i=0;i<=7;i++)
        flag[i][0]=true;
    for(i=1;i<=3;i++)
     for(j=1;j<=mid;j++)
      for(k=0;k<=a[i];k++)
      {
        if(j-(i)*k<0) break;
        if(flag[i-1][j-k*(i)])
        {
            flag[i][j]=true;
            break;
        }
      }
      for(i=6;i>=4;i--)
        for(j=1;j<=mid;j++)
        for(k=0;k<=a[i];k++)
        {
            if(j-(i)*k<0) break;
            if(flag[i+1][j-(i)*k])
            {
                flag[i][j]=true;
                break;
            }
        }
      for(i=0;i<=mid;i++)
      if(flag[3][i]&&flag[4][mid-i])break;

      if(i<=mid)
      printf("Can be divided.\n\n");// cout << "Can be divided.\n\n";
      else  printf("Can't be divided.\n\n");
  }
}


        
    

