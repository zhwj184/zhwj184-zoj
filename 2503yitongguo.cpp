#include<stdio.h>
#include<math.h>
main(){
    int c,n,i;
    double pi;
    pi=atan2(0,-1);
    double s;
    scanf("%d",&c);
    for(i=0;i<c;i++){
        scanf("%d",&n);
        s=1.0/(1-cos(2.0*pi/n));
        printf("%.3lf\n",s);
    }
}
