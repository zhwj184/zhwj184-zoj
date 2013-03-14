


            #include <stdio.h>

int judge(int x, int y)
{
   if(y==0 || x%y==0 || x>2*y)
      return 1;
   else
      return 1^judge(y, x-y);
}

int main()
{
   int x[100], y[100], r[100];
   int i,j,k;
   for(i=0;;i++){
   scanf("%d%d", &x[i],&y[i]);

      if(x[i]==y[i] && x[i]==0)
         break;
      if(x[i] > y[i])
         r[i] = judge(x[i], y[i]);
      else
         r[i] = judge(y[i], x[i]);
   }
   for(j=0;j<i;j++){
      if(r[j])
         printf("Stan wins\n");
      else
         printf("Ollie wins\n");
   }

}
