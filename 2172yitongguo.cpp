#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    int repeat;
    int i,j,k,m,n;
    int A[100];
    char str[100][16][26],s[100][16][26];
    for(i=0;;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]==0){k=i;break;}
        n=0;
        for(j=0;j<A[i];j++)
        {
            scanf("%s",str[i][j]);
            if(j%2==0)strcpy(s[i][j/2],str[i][j]);
            else {
            m=A[i];
            strcpy(s[i][m-1-j/2],str[i][j]);
            }

        }
    }
    for(i=0;i<k;i++)
    {
        printf("SET %d\n",i+1);
        for(j=0;j<A[i];j++)
        printf("%s\n",s[i][j]);
    }
}
            
