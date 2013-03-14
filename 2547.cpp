#include<stdio.h>
#include<math.h>
#define MAX_N 20  //�������ά��
#define MAXREPT 100
#define epsilon 0.00001  //��⾫��

int main()
{
 int n;
 int i,j,k;
 double xmax,oxmax;
 static double a[MAX_N][MAX_N];
 static double l[MAX_N][MAX_N],u[MAX_N][MAX_N];
 static double x[MAX_N],nx[MAX_N];
 printf("\n iput n value(dim of Ax=c):");  //�������ά��
 scanf("%d",&n);
 if(n>MAX_N)
 {
  printf("the input n is larger than MAX_N,please redefine the MAX_N.\n");
  return 1;
 }
 if(n<=0)
 {
  printf("please input a number between 1 and %d.\n",MAX_N);
  return 1;
 }

   //����A����
 printf("now input the matrix a(i,j),i,j=0,...,%d;\n",n-1);
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   scanf("%lf",&a[i][j]);

 for(i=0;i<n;i++)
  x[i]=1;
 oxmax=0;
 for(i=0;i<MAXREPT;i++)
 {
  for(j=0;j<n;j++)  //�ݳ�
  {
   nx[j]=0;
   for(k=0;k<n;k++)
    nx[j]+=a[j][k]*x[k];
  }
  xmax=0.0;
  for(j=0;j<n;j++)  //�淶��
   if(fabs(nx[j])>xmax)
    xmax=fabs(nx[j]);
  for(j=0;j<n;j++)
   nx[j]/=xmax;
  for(j=0;j<n;j++)
   x[j]=nx[j];
  if(fabs(xmax-oxmax)<epsilon)
  {
   printf("solve...max lamda=%lf\n",xmax);  //���
   printf("the vector is:\n");
   for(i=0;i<n;i++)
    printf("%f\n",nx[i]);
   break;
   //return 0;
  }
  oxmax=xmax;
 }
 //printf("after %d repeat ,max no result ...\n",MAXREPT);
 for(i=0;i<n;i++)
  u[i][i]=1;   //U����Խ�ԪΪ1
 for(k=0;k<n;k++)
 {
  for(i=k;i<n;i++)  //����L����
  {
   l[i][k]=a[i][k];
   for(j=0;j<=k-1;j++)
    l[i][k]-=(l[i][j]*u[j][k]);
  }
  for(j=k+1;j<n;j++)  //����U����
  {
   u[k][j]=a[k][j];
   for(i=0;i<=k-1;i++)
    u[k][j]-=(l[k][i]*u[i][j]);
   u[k][j]/=l[k][k];
  }
 }
 for(i=0;i<n;i++)
  x[i]=1;
 for(i=0;i<MAXREPT;i++)
 {
  for(j=0;j<n;j++)  //���ݳ�
  {
   nx[j]=x[j];
   for(k=0;k<=j-1;k++)
    nx[j]-=l[j][k]*nx[k];
   nx[j]/=l[j][j];
  }
  for(j=n-1;j>=0;j--)
  {
   x[j]=nx[j];
   for(k=j+1;k<n;k++)
    x[j]-=u[j][k]*x[k];
  }
  xmax=0.0;
  for(j=0;j<n;j++)
   if(fabs(x[j])>xmax)
    xmax=fabs(x[j]);
  for(j=0;j<n;j++)
   x[j]/=xmax;
  if(fabs(xmax-oxmax)<epsilon)
  {
   printf("solve... min lamda=%lf\n",1/xmax);  //���
   printf("the vector is:\n");
   for(i=0;i<n;i++)
    printf("%f\n",x[i]);
   break;
   //return 0;
  }
  oxmax=xmax;
 }
 return 1;
}

