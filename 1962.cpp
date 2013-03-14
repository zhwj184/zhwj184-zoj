#include <cstdio>
#include <iostream>
using namespace std;
char fz[1024][128], z1[128], z2[128], i1[128], i2[128], ns[128];
int mf;

int add(char *res, char *z1, char *z2)
{
  int c=0;
  int i;
  res[127] = 0;
  for(i=126; i>=0; i--)
    {
      res[i] = z1[i]+z2[i]-'0'+c;
      if (res[i]>'9') {c=1; res[i]-=10;} else c=0;
    }
  return c;
}

int main()
{
	  mf = 2; 
	  //zpad(fz[0], "1"); zpad(fz[1], "2"); zpad(ns, "0");
	  int i,j,k;
	  int min,max;
	  for(i=0;i<1024;i++)
		  for(j=0;j<128;j++)
			  fz[i][j]='0';
	  for(i=0;i<1024;i++)
		  fz[i][127]=0;
	  fz[0][126]='1';
	  fz[1][126]='2';
      while(add(fz[mf], fz[mf-2], fz[mf-1])==0)mf++;
	  while( cin >> i1 >> i2)
	  {
		  if(strcmp(i1,"0")==0 && strcmp(i2,"0")==0) break;
		  for(i=0;i<128;i++){z1[i]='0';z2[i]='0';}
		  z1[127]=0;z2[127]=0;
		  for(k=0;k<strlen(i1);k++) z1[126-k]=i1[strlen(i1)-1-k];
		   for(k=0;k<strlen(i2);k++) z2[126-k]=i2[strlen(i2)-1-k];
		   //cout << z1 << " " << z2 << endl;
		  for(i=0;i<mf;i++)
			  if(strcmp(fz[i],z1)>=0)
			  {
				  min=i;
				  break;
			  }
		  for(i=0;i<mf;i++)
			  if(strcmp(fz[i],z2)>0)
			  {
				  max=i;
				  break;
			  }
		  //cout << min << " " << max << endl;
		  cout << max-min << endl;
	  }
		  

}