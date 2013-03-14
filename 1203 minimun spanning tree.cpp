#include <cstdio>
#include <string>
#include <cmath>

double a[100][100], sum, p[100][2];
int b[100], n;

void prim()
{
 int i, k, j, sp, ep;
 sum = 0;
 for(i = 1; i < n; i ++)
 {
  double min = 30000;
  for(k = 0; k < n; k ++) // Æðµã±ß
  {
   if(!b[k]) continue;
   for(j = 0; j < n; j ++) // ÖÕµã±ß
   {
    if(b[j]) continue;
    if(a[k][j] < min)
    {
     min = a[k][j];
     sp = k, ep = j;
    }
   }
  }
  sum += min;
  b[ep] = 1;
 }
}

void init()
{
 int i, k;
 memset(b, 0, sizeof(b));
 b[0] = 1;
 for(i = 0; i < n; i ++)
 {
  for(k = 0; k < n; k ++)
  {
   if(i == k) a[i][k] = 30000;
   else
   {
    a[i][k] = sqrt((p[i][0] - p[k][0]) * (p[i][0] - p[k][0]) + (p[i][1] - p[k][1]) * (p[i][1] - p[k][1]));
   }
  }
 }
}

int main()
{

 int c = 0;
 while(scanf("%d ", &n) && n)
 {
  if(c ++) printf("\n");

  int i;
  for(i = 0; i < n; i ++)
  {
   scanf("%lf%lf", &p[i][0], &p[i][1]);
  }
  init();
  prim();
   printf("Case #%d:\n", c);
  printf("The minimal distance is: %0.2f\n", sum);
 }
 return 0;
}


