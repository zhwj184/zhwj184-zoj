#include<stdio.h>
main()
{
    int A[1000][1000];
    int B[1000];
    int s[1000],t[1000];
    int i,j,k,m,n;
    int sum1[1000],sum2[1000];
    int flag[1000];
    for(i=0;;i++)
    {
        scanf("%d",&B[i]);
        if(B[i]==0){k=i;break;}
        for(j=0;j<B[i];j++)
        scanf("%d",&A[i][j]);
        s[i]=A[i][0];
        j=B[i]-1;
        t[i]=A[i][j];
        m=1;n=B[i]-2;
        flag[i]=0;
        for(j=0;j<B[i]-2;j++)
        {
            if(s[i]>t[i]){t[i]+=A[i][n];n--;}
            else if(s[i]<t[i]){s[i]+=A[i][m];m++;}
            else {sum1[i]=m;sum2[i]=n;flag[i]=1;break;}
        }

    }
    for(i=0;i<k;i++)
    {
        if(flag[i])printf("Sam stops at position %d and Ella stops at position %d.\n",sum1[i],sum2[i]);
        else printf("No equal partitioning.\n");
    }
}