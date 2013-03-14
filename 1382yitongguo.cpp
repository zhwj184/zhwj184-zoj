#include<stdio.h>
#include<math.h>
main()
{
    int A[11],B[11];
    int repeat;
    long int i,j,k;
    long s[11];
    scanf("%d",&repeat);
    for(i=0;i<repeat;i++)
    {
        scanf("%ld",&s[i]);
        for(j=1;j<=s[i];j+=2)
         {
         for(k=0;;k++)
          {if(s[i]<j*pow(2,k))break;
          if(s[i]==j*pow(2,k))
          {
            A[i]=j;
            B[i]=k;
            break;
          }
          }
    }
    }
    for(i=0;i<repeat;i++)
    printf("%d %d\n",A[i],B[i]);
}
