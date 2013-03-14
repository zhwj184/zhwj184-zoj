#include <cstdio>

int m, n;
double a[101];

int main()
{
 //freopen("in.txt", "r", stdin);
 a[1] = 0, a[2] = 1;
 int i;
 for(i = 3; i < 101; i ++)
 {
  a[i] = (i - 1) * (a[i - 1] + a[i - 2]);
 }
 while(scanf("%d %d", &n, &m) != EOF)
 {
  double pb = 1;
  if(n == m)
  {
   //pb *= a[n];
   for(i = 1; i <= n; i ++)
   {
    pb /= double(i);
   }
  }
  else
  {
   pb *= a[n - m];
   for(i = 1; i <= m; i ++)
   {
    pb /= double(i);
   }
   for(i = 1; i <= n - m; i ++)
   {
    pb /= double(i);
   }
  }
  printf("%0.8f\n", pb);
 }
 return 0;
}

