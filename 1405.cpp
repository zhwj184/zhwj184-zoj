#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    int repeat[100];
    char str[100][21];
    int flag;
    int i,j,k,m,n;
    int x,y,z;
    int result[100];
    for(i=0;;i++)
    {
        scanf("%d",&repeat[i]);
        if(repeat[i]==0){k=i;break;}
        scanf("%s",str[i]);
        m=strlen(str[i]);
        result[i]=0;
        y=repeat[i];
        n=1;
        for(j=1;j<m;j++)
        {
            if(n<=repeat[i])
            {
            for(x=0;x<j;x++)
            {
                if(str[i][j]==str[i][x]&&x<=repeat[i])
                     {n--;}
                if(str[i][j]==str[i][x]&&j>repeat[i]&&x<y)
                    {n--;y+=2;}
            }
            }
            else
            {
                for(x=0;x<y;x++)
                if(str[i][j]==str[i][x])
                n++;
             }
        result[i]=n;
       }
    }
    for(i=0;i<k;i++)
    {
        n=strlen(str[i]);
        if(result[i]==n)printf("All customers tanned successfully.\n");
        else printf("%d customer(s) walked away.\n",result[i]);
    }
}



        
    

