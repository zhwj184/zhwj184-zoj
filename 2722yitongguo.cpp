#include<stdio.h>
main()
{
    unsigned long A;
    int count;
    int i,j,k;
    while((scanf("%ld",&A))!=EOF&&A!=0)
    {
        count=0;
        while(A>1)
        {
            if(A%2==1)A+=1;
            A/=2;
            count++;
        }
        printf("%d\n",count);


     }
}
    
