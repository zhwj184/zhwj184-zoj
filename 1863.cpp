#include <stdio.h>

main(){
   int p,q,r,s,pi,qi,ri,si;
   double z;

   while (4 == scanf("%d%d%d%d",&p,&q,&r,&s)){
      if (p-q < q) q = p - q;
      if (r-s < s) s = r - s;
      z = 1.0;

      for (pi=qi=ri=si=0;pi<q || qi<q || ri<s || si<s;){
         if (z <= 1e16) {
            if (pi<q) z *= (p-pi++);
            else if (si<s) z *= (s-si++);
            else break;
         } else {
            if (qi<q) z /= (q-qi++);
            else if (ri<s) z /= (r-ri++);
            else break;
         }
      }
      for (;pi<q || qi<q || ri<s || si<s;){
            if (pi<q) z *= (p-pi++);
            if (si<s) z *= (s-si++);
            if (qi<q) z /= (q-qi++);
            if (ri<s) z /= (r-ri++);
      }
      printf("%0.5lf\n",z);
   }
}
