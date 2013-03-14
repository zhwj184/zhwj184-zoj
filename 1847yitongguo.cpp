#include<stdio.h>
#include<stdlib.h>
double Round(double Num)
{
    return (Num-(long)Num)>=0.5 ? (long)Num+1 : (long)Num;
}
int main()
{
    int man;
    int i;
    double *dollar,average,exchange;
    while(scanf("%d",&man))
    {
        if(!man)
            break;
        dollar=(double*)malloc(sizeof(double)*man);
        average=0;
        for(i=0;i<man;i++)
        {
            scanf("%lf",&dollar[i]);
            dollar[i]*=100.0;
            average+=dollar[i];
        }
        
          average/=(double)man;
        exchange=0;
        if( (long)average == Round(average) ) {
            average = (long)average;
            for(i=0;i<man;i++)
            {
                if(dollar[i]<average)
                    exchange+=average-dollar[i];
            }
        }
        else {
            average = Round( average );
            for(i=0;i<man;i++)
            {
                if(dollar[i]>average)
                    exchange+=dollar[i]-average;
            }
        }




        printf("$%.2lf\n",exchange/100.0);
        free(dollar);
    }
    return 1;
}

