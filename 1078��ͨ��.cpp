#include<stdio.h>
main()
{
     unsigned int  A[1000];
    int B[1000][50];
    int flag1,flag2;
    int repeat;
    int i,j,k;
    int m,n;
    int C[100];
    unsigned int x,y;
    int D[1000];
    for(i=0;;i++){
        scanf("%d",&A[i]);
        if(A[i]==0){k=i;break;}
        D[i]=0;
        for(j=2;j<=16;j++)
        {
            flag1=1;
            m=0;
            y=A[i];
            while(y)
            {
                C[m]=y%j;
                y/=j;
                m++;
            }
            for(n=0;n<=(m/2);n++)
            {
                if(C[n]!=C[m-n-1])
                   flag1=0;
            }
            if(flag1==1){x=D[i];B[i][x]=j;D[i]++;}
        }
    }
    for(i=0;i<k;i++)
    {
        if(D[i]==0)
           printf("Number %d is not a palindrom\n",A[i]);
        else
        {

           printf("Number %d is palindrom in basis",A[i]);
           for(j=0;j<D[i];j++)
             printf(" %d",B[i][j]);
           printf("\n");
        }
    }
}

