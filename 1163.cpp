#include <stdio.h>
#include <string.h>

double a[505][505];

int main()
{
 int i, k, n;
 memset(a, 0x00, sizeof(a));
 a[0][0] = 1;
 for(i = 0; i < 505; i ++)
 {
  for(k = 1; k <= i; k ++)
   a[i][k] = a[i - k][k - 1] + a[i][k - 1];
  for(k = i + 1; k < 505; k ++)
   a[i][k] = a[i][i];
 }
 while(scanf("%d", &n) && n)
 {
  printf("%0.0f\n", a[n][n] - 1);
 }
 return 0;
}



