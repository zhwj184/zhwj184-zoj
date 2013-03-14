#include <stdio.h>
void main()
{
 int i,x,y,n,t;
 char a[10000];
 scanf("%d",&n);
 gets(a);
 for (t=0;t<n;t++)
 {
  for (x=0,y=0;;)
  {
   gets(a);
   if (strcmp(a,"##")==0)
    break;
   for (i=0;;i++)
   {
    if (a[i]=='\t')
     x++;
    if (a[i]=='\0')
     break;
   }
   i--;
   for (;i>=0;i--)
   {
    if (a[i]==' ')
     y++;
    else if (a[i]=='\t')
    {
     y+=4;
    }
    else
     break;
   }
  }
  printf("%d tab(s) replaced\n%d trailing space(s) removed\n",x,y);
 }
}
