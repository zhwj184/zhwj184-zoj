#include <stdio.h>
int main()
{
 int Station[1001],In[1000];
 bool bk,end;
 int n,i,rer;
 int *ptrS,*ptrI;
 while(scanf("%d",&n))
 {
  if(n==0)
   break;
  while(1)
  {
   bk = false;
   for(i=0;i<n;++i)
   {
    scanf("%d",&In[i]);
    if(In[i]==0)
    {
     bk = true;
     break;
    }
   }
   if(bk == true)
    break;
   rer = 1;
   end = false;
   ptrS = Station;
   ptrI = In;
   *ptrS  = 0;
   for(i=0;i<n;++i)
   {
    if(In[i]==rer)
     rer++;
    else
    {
     if(In[i]==*ptrS)
     {
      --ptrS;
     }
     else if(In[i]>rer)
     {
      while(rer<In[i])
      {
       ptrS++;
       *ptrS = rer;
       ++rer;
      }
      ++rer;
     }
     else
     {
      end = true;
      break;
     }
    }
   }
   if(end==true)
    printf("No\n");
   else
    printf("Yes\n");
  }
  printf("\n");
 }
 return 0;
}

