#include<stdio.h>
#include<math.h>
#include<iostream.h>
main()
{
    long N;
    int M,A;
    while((scanf("%ld",&N))!=EOF)
    {

        M=(int)(N*log10(N));
        A=(int)pow(10,(N*log10(N)-M));
        printf("%d\n",A);
    }
}
