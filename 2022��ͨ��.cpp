用scanf和sprintf比cin和cout速度快，用scanf可以通过，用cin超时。郁闷



#include<stdio.h>
#include<math.h>
#include<iostream.h>
main()
{
    long n;
    long count;
    int t;
   scanf("%d",&t);
    while(t--)
    {
       scanf("%ld",&n);
        count=0;

            /*while(k%5==0)
            {
                k/=5;
                count++;
            }

     long tmp = n/ 5;
     long result = 0;

     while ( tmp >0 )
        {
        result += tmp;
        tmp /= 5;
        }

     cout << result<<endl;

    }   */

    long iNum = (int)log(n)-(int)log10(n);
    long count = 0;
    for(long i=1;i<=iNum+1;i++)
    {
            count += n/pow(5,i);
    }
    printf("%ld\n",count);

}
}
        

