#include<stdio.h>
main()
{
    int f1=1,f2=1;
    long N[1000];
    long i=1,j;
    int A[1000],B[1000];
    int f;
    int m,k;
    int o,p;
    int W[100];
    int result[100];
    for(m=0;;m++){
        scanf("%d%d%ld",&A[m],&B[m],&N[m]);
        if(A[m]==0&&B[m]==0&&N[m]==0){k=m;break;}
        if(N[m]==1||N[m]==2)result[m]=1;
        else {
            W[0]=1;
            W[1]=1;
            for(j=0;j<(N[m]-2);j++){
                f=(A[m]*f2%7+B[m]*f1%7)%7;
                f1=f2;
                f2=f;
                W[j+2]=f;
                if(W[j+2]==W[1]&&W[j+1]==W[0]&&(j<N[m]-2)){i=j+3;break;}
                
            }
            o=N[m];
            result[m]=W[o%i-1];
         }
    }
    for(m=0;m<k;m++)printf("%d\n",result[m]);
}

