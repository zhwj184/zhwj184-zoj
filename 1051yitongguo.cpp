           #include<cstdio>
#include<cstdlib>
#include<string>
#include<cmath>

int Day, D[16], Square[20][20];
int Square2[20][20];
char *Sign = ".!X#";

int Run ()
{
 int i, j, k, m;
 for (i = 0; i < Day; i ++)
 {
  for (j = 0; j < 20; j ++)
   for (k = 0; k < 20; k ++)
   {
    m = Square[j][k];
    if (j - 1 >= 0)
     m += Square[j - 1][k];
    if (j + 1 < 20)
     m += Square[j + 1][k];
    if (k - 1 >= 0)
     m += Square[j][k - 1];
    if (k + 1 < 20)
     m += Square[j][k + 1];

    Square2[j][k] = Square[j][k] + D[m];
    if (Square2[j][k] > 3)
     Square2[j][k] = 3;
    if (Square2[j][k] < 0)
     Square2[j][k] = 0;
   }

   memcpy (Square, Square2, sizeof(Square[0][0]) * 20 * 20);
 }

 for (i = 0; i < 20; i ++)
 {
  for (j = 0; j < 20; j ++)
   printf ("%c", Sign[Square2[i][j]]);
  printf ("\n");
 }

 return 0;
}

int main()
{

 int j, k, t, aa = 1;
 scanf( "%d", &t);
 while (t --) {
  if (aa) aa = 0; else printf("\n");
  scanf ( "%d", &Day);
  for (j = 0; j < 16; j ++)
   scanf ( "%d", &D[j]);
  for (j = 0; j < 20; j ++)
   for (k = 0; k < 20; k ++)
    scanf ( "%d", &Square[j][k]);
  Run ();
 }

 return 0;
}



