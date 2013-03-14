/* Don't need the array; doesn't need to be so big; who cares? */

#include <stdio.h>

long long most[1000000];

main(){
   long long i;
   int j,n,x,y;
   for (i=0;i<500000;i++){
      most[2*i] = i*(i+1);
      most[2*i+1] = (i+1)*(i+1);
   }
   scanf("%d",&n);
   while (n--) {
      scanf("%d%d",&x,&y);
      for (j=0;most[j] < y-x;j++);
      printf("%d\n",j);
   }
}

   
