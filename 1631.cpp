#include <stdio.h>
     int main()
     {
           char name[2][21];
           int hp1,arm1,co1,am1,at1;
          int hp2,arm2,co2,am2,at2;
          int t1,t2;

           while(scanf("%s",&name[0])!=EOF)
         {
              scanf("%d%d%d%d%d",&hp1,&arm1,&co1,&am1,&at1);
             scanf("%s",&name[1]);
              scanf("%d%d%d%d%d",&hp2,&arm2,&co2,&am2,&at2);
             at1=at1-arm2;
               at2=at2-arm1;
             at1*=am1;
              at2*=am2;
              if(at1<1)
                at1=1;
             if(at2<1)
                at2=1;
              t1=hp1/at2;
              if(t1*at2<hp1)
               t1++;
               t2=hp2/at1;
              if(t2*at1<hp2)
               t2++;
             t1*=co2;
              t2*=co1;
               if(t1==t2)
              printf("All Die!\n");
             else if(t1>t2)
              printf("%s Survive!\n",name[0]);
              else
               printf("%s Survive!\n",name[1]);
          }
         return 0;
    }

