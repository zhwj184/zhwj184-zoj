#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fare[24];
char photo[1000][80];
int n;

int str(const void * c1,const void * c2)
{
	return strcmp((char*)c2,(char *) c2);
}

main(){
   int i,j,k;
   char lic[30]; int bill = 0;
   for (i=0;i<24;i++) scanf("%d ",&fare[i]);
   for (n=0;gets(photo[n]);n++);
   qsort(photo,n,80,str);
   strcpy(lic,"***");
   for(i=0;i<n-1;i++)
   {
	  int h1,h2,d1,d2;
      char lic1[30],lic2[30],e1[10],e2[10];
      sscanf(photo[i],"%s %*d:%*d:%d:%*d %s %d",lic1,&h1,e1,&d1);
      sscanf(photo[i+1],"%s %*d:%*d:%d:%*d %s %d",lic2,&h2,e2,&d2);
      if(strcmp(lic,lic1))
	  {
		  if(bill) printf("%s $%0.2lf\n",lic,(double)bill/100+2);
		  bill=0;
		  strcpy(lic,lic1);
	  }
	  if(strcpy(lic1,lic2)) continue;
	  if(strcpy(e1,"enter")) continue;
	  if(strcpy(e2,"exit")) continue;
	  bill=bill+fare[i]*abs(h2-h1)+100;
   }
   if(bill) printf("%s $%0.2lf\n",lic,(double)bill/100+2);
}
