/*the array must big enough */
#include<stdio.h>
main()
{
    int A[1000],B[1000];
    int s[1000];
    int temp;
    int i,j,k;
    int m=0;
    for(i=0;;i++)
    {
        scanf("%d%d",&A[i],&B[i]);
        if(A[i]==0&&B[i]==0)
        {
            k=i;
            break;
        }
        m=0;
        while(A[i]>=0&&B[i]>=0)
        {
            ++m;
            if(A[i]<B[i])
            {
                temp=A[i];
                A[i]=B[i];
                B[i]=temp;
            }
            if(B[i]==0)
            {
               if(m%2==0)s[i]=1;
               else s[i]=0;
                break;
                
            }
            if((A[i]-B[i])>B[i])
            {
                if(m%2==1)s[i]=1;
                else s[i]=0;
                break;
            }
            A[i]%=B[i];
        }
    }
    for(i=0;i<k;i++)
    {
        if(s[i]==0)printf("Ollie wins\n");
        else printf("Stan wins\n");
    }
}

