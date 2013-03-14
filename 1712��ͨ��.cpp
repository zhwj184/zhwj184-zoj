#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
main()
{
    char ch[100][32];
    int i,j,k;
    long A[100];
    int m,n;
    for(i=0;;i++)
    {
        scanf("%s",ch[i]);
        m=strlen(ch[i]);
        if(strcmp(ch[i],"0")==0){k=i;break;}
        A[i]=0;
        for(j=0;j<m;j++)
        {
            A[i]+=(ch[i][j]-'0')*(pow(2,m-j)-1);
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%ld\n",A[i]);
    }
}

    
