#include<stdio.h>
main()
{
    int repeat;
    int A[1000];
    long sum[1000];
    int i,j,k;
    long m;
    scanf("%d",&repeat);
    for(i=0;i<repeat;i++)
    {
        scanf("%d",&A[i]);
        m=0;
        sum[i]=0;
        for(j=1;j<=A[i];j++)
        {
            m+=j;
            sum[i]+=j*(m+j+1);
        }
    }
    for(i=0;i<repeat;i++)
    printf("%d %d %ld\n",i+1,A[i],sum[i]);
}
            

