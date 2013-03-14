#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char name[100][1000][11],account[100][1000][11];
    int repeat;
    int i,j,k,m,n;
    int result[100];
    int temp;
    int sum[100];
    int flag[100][1000];
    for(i=0;;i++)
    {
        scanf("%d",&sum[i]);
        if(sum[i]==0){k=i;break;}
        result[i]=0;
        temp=0;
        for(j=0;j<sum[i];j++)
        {
            temp=0;
            flag[i][j]=0;
            scanf("%s%s",name[i][j],account[i][j]);
            n=strlen(account[i][j]);
            for(m=0;m<n;m++)
            {
                if(account[i][j][m]=='1'){account[i][j][m]='@';temp=1;flag[i][j]=1;}
                    if(account[i][j][m]=='0'){account[i][j][m]='%';temp=1;flag[i][j]=1;}
                       if(account[i][j][m]=='l'){account[i][j][m]='L';temp=1;flag[i][j]=1;}
                          if(account[i][j][m]=='O'){account[i][j][m]='o';temp=1;flag[i][j]=1;}
            }
            if(temp)result[i]++;
        }
    }
    for(i=0;i<k;i++)
    {
        if(result[i]==0)printf("No account is modified.\n");
       else{
         printf("%d\n",result[i]);
         for(j=0;j<sum[i];j++)
         {
            if(flag[i][j]==1)
              printf("%s %s\n",name[i][j],account[i][j]);
         }
       }
    }
}

