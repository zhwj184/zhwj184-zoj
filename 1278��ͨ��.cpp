#include<stdio.h>
main()
{
    int L[100];
    int A[100][9999];
    int Z[100],I[100],M[100];
    int repeat;
    int i,j,k;
    int flag=0;
    int result[100];
    for(i=0;;i++)
    {
        flag=0;
        scanf("%d%d%d%d",&Z[i],&I[i],&M[i],&L[i]);
        if(Z[i]==0&&I[i]==0&&M[i]==0&&L[i]==0){repeat=i;break;}
        A[i][0]=L[i];
        for(j=0;;j++)
        {
            A[i][j+1]=(A[i][j]*Z[i]+I[i])%M[i];
            for(k=0;k<=j;k++)
            {
                if(A[i][j+1]==A[i][k])
                {result[i]=j-k;
                flag=1;
                break;}
            }
            if(flag)break;
        }

    }
    for(i=0;i<repeat;i++)
    printf("Case %d: %d\n",i+1,result[i]+1);
}
        

            
