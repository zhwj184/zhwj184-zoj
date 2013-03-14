#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    int repeat;
    int i,j,k;
    int m,n;
    int count[100][100];
    char str[100][100];
    char s[100][100];
    scanf("%d",&repeat);
    for(i=0;i<repeat;i++)
    {
        scanf("%s",str[i]);
        k=strlen(str[i]);
        m=1;
        s[i][0]=str[i][0];
        for(j=1;j<k;j++)
        {

            if(str[i][j]!=str[i][j-1])
            {
               s[i][m]=str[i][j];
               m++;
            }
        }

        m=0;
        n=strlen(s[i]);
        for(j=0;j<n;j++) count[i][j]=1;
        for(j=0;j<(k-1);j++)
        {

            if(str[i][j+1]==str[i][j])
            {
                count[i][m]++;
            }
            else
            {
                m++;
            }
        }
       }
    for(i=0;i<repeat;i++)
    {
        m=strlen(s[i]);
        for(j=0;j<m;j++)
        {
           if(count[i][j]==1)printf("%c",s[i][j]);
           else printf("%d%c",count[i][j],s[i][j]);
        }
        printf("\n");
    }
}
