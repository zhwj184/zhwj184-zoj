#include <stdio.h>
#include <iostream.h>
int cperg[] = {9,4,4,4,7};

int main()
{

  double tot,per,cal,g;
  int i,j,k,m,n;
  int q[5];
  char u[5];
  for(;;)
  {
     double s=0;
     double t=0;
     for(j=0;;j++)
     {
     tot=0;
     per=0;
     for(i=0;i<5;i++)
     {
           if (2 != scanf("%d%c",&q[i],&u[i])){break;}
           if(u[i]=='g') tot+=q[i]*cperg[i];
           if(u[i]=='C') tot+=q[i];
           if(u[i]=='%') per+=q[i];
     }
     if(i==0) break;
     tot=tot*100/(double)(100-per);
     t+=tot;
     
     if(u[0]=='g') s+=q[0]*9;
     if(u[0]=='C') s+=q[0];
     if(u[0]=='%') s+=(tot*q[0]/100);
     }
     if(j==0) break;
      printf("%0.0lf%%\n",100*s/t);
    // cout << (int)((s)*100/t) << "%" << endl;
  }
}
        



