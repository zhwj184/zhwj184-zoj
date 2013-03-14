#include<stdio.h>
#include<math.h>
main()
{
      float Vs,R,C;
      int i,j,n;
      float W[1000];
      float  Vr[1000];
      scanf("%f%f%f",&Vs,&R,&C);
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%f",&W[i]);
                      Vr[i]=sqrt(1+(R*C*W[i])*(R*C*W[i]));
                      Vr[i]=(R*Vs*C*W[i])/Vr[i];
      }
      for(i=0;i<n;i++)
      printf("%.3f\n",Vr[i]);
}
