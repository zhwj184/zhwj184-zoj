#include <stdio.h>
#include <iostream.h>
int main()
{
    int test;
    long str;
    int num;
    long s[1001];
    long sum;
    long min,max;
    int i,j,k;
    while(cin >> str >> num)
    {

        for( i=0; i<num;i++)
         scanf("%ld",&s[i]);
         
         min=str;
         max=str;
         for(i=0;i<num-1;i++)
          min+=(str-s[i]);
         for(i=num-1;i>0;i--)
          max+=s[i];
          if(min>max)printf("%ld\n",max);
          else printf("%ld\n",min);
    }
}
         
         
