#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char ch[1000][21];
    int i,j,k;
    int flag1,flag2,flag3;
    int m,n;
    int result[100];
    for(i=0;;i++)
    {
        flag1=0;
        flag2=1;
        scanf("%s",ch[i]);
        if((strcmp(ch[i],"end"))==0){k=i;break;}
        result[i]=0;
        m=strlen(ch[i]);
        if(m==1){if(ch[i][0]=='a'||ch[i][0]=='e'||ch[i][0]=='i'||ch[i][0]=='o'||ch[i][0]=='u')result[i]=1;}

        else
        {
        for(j=0;j<m;j++)
        {
            if(ch[i][j]=='a'||ch[i][j]=='e'||ch[i][j]=='i'||ch[i][j]=='o'||ch[i][j]=='u'){flag1=1;break;}
        }
        for(j=0;j<(m-1);j++)
        {
            if(ch[i][j+1]==ch[i][j]&&ch[i][j]!='e'&&ch[i][j]!='o')
            {flag2=0;
            break;}
        }
        if(m<=2)flag3=1;
        else
        {
        for(j=0;j<(m-2);j++)
        {
            if((ch[i][j]=='a'||ch[i][j]=='e'||ch[i][j]=='i'||ch[i][j]=='o'||ch[i][j]=='u')&&
                (ch[i][j+1]=='a'||ch[i][j+1]=='e'||ch[i][j+1]=='i'||ch[i][j+1]=='o'||ch[i][j+1]=='u')&&
                (ch[i][j+2]=='a'||ch[i][j+2]=='e'||ch[i][j+2]=='i'||ch[i][j+2]=='o'||ch[i][j+2]=='u'))
                {flag3=0;break;}
            else  if((ch[i][j]!='a'&&ch[i][j]!='e'&&ch[i][j]!='i'&&ch[i][j]!='o'&&ch[i][j]!='u')&&
                (ch[i][j+1]!='a'&&ch[i][j+1]!='e'&&ch[i][j+1]!='i'&&ch[i][j+1]!='o'&&ch[i][j+1]!='u')&&
                (ch[i][j+2]!='a'&&ch[i][j+2]!='e'&&ch[i][j+2]!='i'&&ch[i][j+2]!='o'&&ch[i][j+2]!='u'))
                {flag3=0;break;}
            else flag3=1;
        }
        }
        }
        if(flag1&&flag2&&flag3)result[i]=1;
    }
    for(i=0;i<k;i++)
    {
        if(result[i]==1)printf("<%s> is acceptable.\n",ch[i]);
        else printf("<%s> is not acceptable.\n",ch[i]);
    }
}
