#include <stdio.h>

 

#define MAX_SIZE 100

 

int EigenV(int n, double a[][MAX_SIZE], double *lambda, double v[], 

double TOL, int MAXN);

 

int main()

{

    int n, MAXN, m, i, j, k;

    double a[MAX_SIZE][MAX_SIZE], v[MAX_SIZE];

    double lambda, TOL;

 

    while (scanf("%d", &n) != EOF) {

       for (i=0; i<n; i++) 

           for (j=0; j<n; j++) 

              scanf("%lf", &a[i][j]);

       scanf("%lf %d", &TOL, &MAXN);

       scanf("%d", &m);

       for (i=0; i<m; i++) {

           scanf("%lf", &lambda);

           for (j=0; j<n; j++)

              scanf("%lf", &v[j]);

           switch (EigenV(n, a, &lambda, v, TOL, MAXN)) {

              case -1: 

                  printf("%12.8f is an eigenvalue.\n", lambda );

                  break;

              case 0:

                  printf("Maximum number of iterations exceeded.\n");

                  break;

              case 1:

                  printf("%12.8f\n", lambda );

                  for (k=0; k<n; k++)

                     printf("%12.8f ", v[k]);

                  printf("\n");

                  break;

           }

       }

       printf("\n");

    }
    return 0;

}

 

#include <cmath>
#include <iostream>
using namespace std;

int EigenV(int n, double a[][MAX_SIZE], double *lambda, double v[], 

double TOL, int MAXN)
{
	double b[MAX_SIZE][MAX_SIZE];
	int i,j,r;
	double q=*lambda;
	int p;
	int k;
	double max=0.0,mm=0.0;
	double x[MAX_SIZE];
	double temp1=0.0,temp2=0.0,value=0.0,tmp;
	double u[MAX_SIZE];
	
	
	
	int m=0;
   	for(k=0;k<n;k++)
		if(fabs(v[k])>fabs(max))
		{
				max=v[k];
				p=k;
		}
	for(i=0;i<n;i++){ u[i]=v[i]/max;x[i]=v[i]/max;}

	for(i=0;i<MAXN;i++)
	{
		for(r=0;r<n;r++)
			for(j=0;j<n;j++)
				b[r][j]=a[r][j];

		for(k=0;k<n;k++)
			b[k][k]-=q;

		//for(r=0;r<n;r++){ x[r]=v[i];u[i]=v[i];}

		for(j=0;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				tmp=b[k][j]/b[j][j];
				for(r=j;r<n;r++)
					b[k][r]-=(tmp*b[j][r]);
				u[k]-=(tmp*u[j]);
			}
		}
		if(u[n-1]==0.0) return -1
			;

		v[n-1]=b[n-1][n-1]/u[n-1];
		for(j=n-2;j>=0;j--)
		{
			tmp=0;		
			for(k=j+1;k<n;k++)
			{
				tmp+=v[k]*a[j][k];
			}
			v[j]=(u[j]-tmp)/a[j][j];
		}

		 max=v[p];
		 mm=0.0;
		 for(k=0;k<n;k++)
			if(fabs(v[k])>fabs(mm))
			{
				mm=v[k];
				p=k;
			}
		tmp=0;
		for(k=0;k<n;k++)
		if(fabs(x[k]-v[k]/mm)>tmp)
			tmp=fabs(x[k]-v[k]/mm);
		for(k=0;k<n;k++)
			x[k]=v[k]/mm;
		if(tmp<TOL) {
			*lambda=1/max+*lambda;
			for(k=0;k<n;k++)
				v[k]=x[k];
			return 1;
		}
		if(i==MAXN-1) 
			return 0;
		
	}


}