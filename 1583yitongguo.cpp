#include<stdio.h>
main()
{
    int A[501][501];
    int B[501][501];
    int c[3][3]={1,2,1,2,4,2,1,2,1};
    int i,j,k,m,n;
    int s;
    int count=0;
    while((scanf("%d",&s))!=EOF&&s!=0)
    {
        for(i=0;i<s;i++)
        for(j=0;j<s;j++)
        scanf("%d",&A[i][j]);
        
        k=0;
        for(i=0;i<s;i++)
         for(j=0;j<s;j++)
         {
            k=0;
            if(i==0||j==0||i==s-1||j==s-1)B[i][j]=A[i][j];
            else
            {
            for(m=0;m<3;m++)
            for(n=0;n<3;n++)
            k+=(A[i+m-1][j+n-1]*c[m][n]);
            B[i][j]=k/16;
         }
         }
         printf("Case %d:\n",count+1);
         for(i=0;i<s;i++)
         {
         for(j=0;j<(s-1);j++)
            printf("%d ",B[i][j]);
            printf("%d\n",B[i][s-1]);
         }
         count++;
    }
}
