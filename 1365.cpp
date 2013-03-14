#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char c[100][1000];
    char s[100][1000][100],t[100][1000][100];
    int i,j,k,m,n;
    int count[100][1000];
    int sum[100];
    int flag=0;
    int flag1;
    for(i=0;flag!=1;i++)
    {
        sum[i]=0;
        for(j=0;;j++)
        {
            scanf("%s",s[i][j]);
            if(((strcmp(s[i][j],"0"))==0)){break;}
            if((strcmp(s[i][j],"#"))==0){flag=1;break;}
            scanf("%s",t[i][j]);
            scanf("%d%c",&count[i][j],&c[i][j]);

            if(c[i][j]=='F')sum[i]=sum[i]+2*count[i][j];
            else if(c[i][j]=='B')sum[i]=sum[i]+1.5*count[i][j];
            else
            {
                if(count[i][j]<500)sum[i]=sum[i]+500;
                else sum[i]=sum[i]+count[i][j];
            }
        }
        if(flag==1){k=i;break;}
    }
    for(j=0;j<k;j++)
    printf("%d\n",sum[j]);
}

