#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<iostream.h>
main()
{
    char str[500][11];
    long int A[500],B[500];
    char result[500][11];
    int flag[500];
    int i,j,k,m,n;
    i=0;
    long sum;
    char s[7];
    while(cin>>s)
    {
        sum=0;
        flag[i]=0;
        scanf("%d%d",&A[i],&B[i]);
        m=strlen(s);
        for(j=0;j<m;j++)
        {
            if(s[j]>='A'&&s[j]<='Z')sum=sum*A[i]+((s[j]-'A')+10);
            else sum=sum*A[i]+(s[j]-'0');
        }
            n=0;
            while(sum)
            {
                m=sum%B[i];
                if(m>=10)result[i][n]='A'+(m-10);
                else result[i][n]='0'+(m-0);
                sum/=B[i];
                n++;
            }
            if(n>7)flag[i]=1;
        i++;
        }
        for(j=0;j<i;j++)
        {
            if(flag[j]==1)printf("  ERROR\n");
            else
            {
                m=strlen(result[j]);
                for(k=0;k<(7-m);k++)printf(" ");
                for(k=0;k<m;k++)printf("%c",result[j][m-k-1]);
                printf("\n");
            }
        }
    }

        

